#include <stdio.h>

int main () {

    int a, b, c, d, x;
    a = 5;
    b = 7;
    c = 12;
    d = 15;
    printf ("\n value of a = %d\n value of b = %d\n value of c = %d\n value of d = %d\n", a, b, c, d);

    b = ++a;

    printf ("\n After Using The PRE-INCREMENT Operator: \n");
    printf ("\n value of a = %d\n", a);
    printf (" value of b = %d\n", b);

    x = ++a + ++b + ++c + ++d;

    printf (" \n value of x = %d\n", x);
    printf ("\n Updated value of a = %d\n Updated value of b = %d\n Updated value of c = %d\n Updated value of d = %d", a, b, c, d);

    getch();
    return 0;
}

