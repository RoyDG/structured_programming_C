#include <stdio.h>

int main() {
	int i,n,sum;
	sum = 0;
	scanf("%d",&n);
	printf("The first %d natural number is: \n", n);
	for(i=1;i<=n;i++){
        printf("%d ", i);
        sum = sum + i;
	}
	printf("\nThe Sum of Natural Number upto %d terms : %d",n,sum);

	return 0;
}
