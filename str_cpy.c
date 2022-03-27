#include <stdio.h>

int main(){

    char source[]="Programming";
    char target[20];
    int i=0;

    while(source[i] != '\0'){
       target[i] = source[i];
       i++;
    }
    printf("\nSource: %s", source);
    printf("\nTarget: %s", target);

    getch();
    return 0;
}

