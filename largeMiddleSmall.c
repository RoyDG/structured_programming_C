#include <stdio.h>

int main(){

    int a, b, c;
    printf("input three value: ");
    scanf("%d%d%d", &a,&b, &c);

    //small
    if(a < b && a < c){
        printf("\n A is smallest %d", a);
    }
    else if(b < a && b < c){
        printf("\n B is smallest %d",b);
    }
    else {
        printf("\n C is smallest %d",c);
    }

    //middle
    if(a > b && a < c){
        printf("\n A is middle %d", a);
    }
    else if(b > a && b < c){
        printf("\n B is middle %d",b);
    }
    else if(c > b && c < a){
        printf("\n C is middle %d",c);
    }
    else {
        printf("\n C is middle %d",c);
    }
    //largest
    if(a > b && a > c){
        printf("\n A is largest %d", a);
    }
    else if(b > a && b > c){
        printf("\n B is largest %d",b);
    }
    else {
        printf("\n C is largest %d",c);
    }

    return 0;
}
