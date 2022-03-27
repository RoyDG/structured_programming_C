#include <stdio.h>

int main(){
    char s[100];

    printf("Enter String To Find The Length: ");
    gets(s);
    int i = 0;
    while(s[i] != '\0'){

        i++;
    }
    printf("\nLength Of The String Is: %d", i);
    getch();
    return 0;
}
