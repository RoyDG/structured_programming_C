#include <stdio.h>

int main(){

    int row, i, j;
    printf("Enter number Of Rows: ");
    scanf("%d", &row);

    for(i=0; i<=row; i++){
        for(j=1; j<= row-i; j++){
            printf(" ");
        }
        for(j=1; j<= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=row-1; i>=1; i--){
        for(j=1; j<= row-i; j++){
            printf(" ");
        }
        for(j=1; j<= 2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
}
