#include <stdio.h>

int main(){

    int input;
    printf("input a number: ");
    scanf("%d",&input);

    if (input%2 == 0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }

    return 0;
}
