#include <stdio.h>


int main()
{
    char ch;

    printf("Input a character: ");
    scanf("%c",&ch);


    if(ch>='a' && ch<='z'){
        printf("It is lower case letter.\n");
    }
    else if(ch>='A' && ch<='Z') {
        printf("It is upper case letter.\n");
    }
    else if(ch>='0' && ch <='9') {
        printf("It is digit.\n");
    }
    else if((ch == ' ') ||  (ch == '\t') || (ch == '\n')){
        printf("It is white space.\n");
    }
    else{
        printf("");
    }

    return 0;
}
