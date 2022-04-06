#include <stdio.h>

int main(){

    int *p, *q;
    int a, b;

    p = &a;
    q = &b;

    a = 10;
    b = 20;

    printf("%d\n", *p+3);
    printf("%p\n", *q);

    return 0;
}
