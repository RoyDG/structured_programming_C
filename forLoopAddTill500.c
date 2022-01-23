#include<stdio.h>

int main()
{
    int i, addition = 0;


    for( i=1; i<=500; i++){
        addition = addition + i;
    }
        printf("%d", addition);
    return 0;
}
