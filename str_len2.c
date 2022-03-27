#include <stdio.h>

int main(){
    char s[100];

    printf("Enter String To Find The Length: ");
    gets(s);
    int length = strlen(s);

    printf("\nLength Of The String Is: %d", length);

    getch();
    return 0;
}

