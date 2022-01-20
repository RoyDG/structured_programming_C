#include <stdio.h>

int main(){

    int a, b, c, math;
    printf("input three number: ");
    scanf("%d%d%d",&a,&b,&c);
    math = a-b-c;
    printf("Subtraction of three number is: %d\n",math);

    return 0;
}
