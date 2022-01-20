#include <stdio.h>

int main(){

    int input;
    printf("input a number: ");
    scanf("%d", &input);

    if(input%9 == 0 && input%7 == 0){
        printf("the number is divisible by 9 and 7");
    }
    else{
            printf("the number is not divisible by 9 and 7");
    }
    return 0;
}
