#include <stdio.h>
#include <string.h>

int changePosition(char *ch1, char *ch2){
    char tmp;
    tmp = *ch1;
    *ch1 = *ch2;
    *ch2 = tmp;
}
int charPermu(char *ch, int start, int end){
    int i;
    if (start == end)
    printf(" %s ", ch);
    else{
       for (i = start; i <= end; i++){
          changePosition((ch+start), (ch+i));
          charPermu(ch, start+1, end);
          changePosition((ch+start), (ch+i));
       }
   }
}

int main(){
    char str[] = "abcd";
    int n = strlen(str);
    printf(" The permutations of the string are : \n\n");
    charPermu(str, 0, n-1);
    getch();
    return 0;
}
