#include<stdio.h>


int main(){

    int a, b, c, max;
    printf("Enter any three numbers\n");
    scanf("%d%d%d", &a, &b, &c);

    max= (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf ("%d", max);
    printf (" is the largest number of given numbers");

    return 0;

}
