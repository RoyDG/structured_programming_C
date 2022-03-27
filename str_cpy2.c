#include <stdio.h>

int main(){

    char source[]="Programming";
    char target[20];
    strcpy(target,source);
    printf("\nSource: %s", source);
    printf("\nTarget: %s", target);

    getch();
    return 0;
}
