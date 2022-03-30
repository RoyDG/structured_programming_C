#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    char s2[100];
    gets(s);
    strcpy(s2,s);
    strrev(s);
    int x = strcmp(s,s2);

    if(x==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
