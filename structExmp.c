#include <stdio.h>

struct mulDataTyp {
    int a;
    float b, c;
    char d;
};

int main(){
    struct mulDataTyp x;
    x.a = 10;
    x.b = 10.5;
    x.c = 10.6;
    x.d = 'c';

    printf("%d\n", x.a);
    printf("%lf\n", x.b);
    printf("%lf\n", x.c);
    printf("%c\n", x.d);


    return 0;
}
