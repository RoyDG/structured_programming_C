#include <stdio.h>

double square(double num){

    return num*num;
}

int main(){

    int input;
    double newNum;

    printf("Enter any number for Square : ");
    scanf("%d",&input);

    newNum = square(input);

    printf("The square of %d is : %.2f\n",input,newNum);

    return 0;

}
