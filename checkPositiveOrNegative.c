#include <stdio.h>

int main(){

    int input;
    printf("input a number: ");
    scanf("%d",&input);

    if (input >= 0){
        printf("the number is positive");
    }
    else{
        printf("the number is negative");
    }

    return 0;
}
