#include <stdio.h>



int main(){

    char c;
    unsigned char uc;
    short s;
    int i;
    unsigned int ui;
    unsigned long ul;
    float f;
    double d;

    printf("Size Of Character: %d bytes\n",sizeof(c));
    printf("Size Of Unsigned Char: %d bytes\n",sizeof(uc));
    printf("Size Of Short: %d bytes\n",sizeof(s));
    printf("Size Of Intiger: %d bytes\n",sizeof(i));
    printf("Size Of Unsigned int: %d bytes\n",sizeof(ui));
    printf("Size Of Unsigned long: %d bytes\n",sizeof(ul));
    printf("Size Of Float: %d bytes\n",sizeof(f));
    printf("Size Of Double: %d bytes\n",sizeof(d));

    getchar();
    return 0;

}

