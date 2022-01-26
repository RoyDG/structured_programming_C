#include <stdio.h>

int main(){

    int i, n;
    printf("Input the number (Table to be calculated) : ");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        printf("\n %d * %d = %d",n,i,n*i);
    }

    return 0;
}
