#include <stdio.h>

int main (){
    int x, y, z, result;

    printf (" Enter the value of x: ");
    scanf (" %d", &x);
    printf (" Enter the value of y: ");
    scanf (" %d", &y);
    printf (" Enter the value of z: ");
    scanf (" %d", &z);


    printf (" \n Before using the incr-decr operator: ");
    printf (" \n The original value of x: %d", x);
    printf (" \n The original value of x: %d", y);
    printf (" \n The original value of x: %d", z);


    result = x++ + ++x + ++y + y++ + ++z;

    printf (" \n\n After using the incr-decr operator: \n");
    printf (" \n The result is: %d\n", result);
    printf (" \n updated value of x: %d", x);
    printf (" \n updated value of y: %d", y);
    printf (" \n updated value of z: %d", z);

    getch();
    return 0;

}
