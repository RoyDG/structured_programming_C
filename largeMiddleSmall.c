#include <stdio.h>

int main(){

    int a, b, c;
    printf("input three value: ");
    scanf("%d%d%d", &a,&b, &c);


    if(a < b && a < c){
        printf("\n A is smallest %d", a);
    }
    else if(b < a && b < c){
        printf("\n B is smallest %d",b);
    }
    else {
        printf("\n C is smallest %d",c);
    }

    return 0;
}
