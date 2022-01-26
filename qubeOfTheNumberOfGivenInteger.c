#include <stdio.h>

int main() {
    int i, n,sum;
    sum=0;
    printf("Input number of terms : ");
    scanf("%d",&n);
     for(i=1; i<=n; i++){
        sum = i*i*i;
        printf("\nno is %d and qube of the %d is : %d",i,i,sum);
     }


	return 0;
}
