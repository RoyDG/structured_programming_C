#include <stdio.h>
//Write a program in C to read 10 numbers from keyboard and find their sum and average.

int main() {
	int i,n;
	float avg,sum;
	sum = 0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
        sum = sum + i;
        avg = sum/n;
	}
	printf("\nThe Sum of %d no is: %.f\n",n,sum);
	printf("The avarage is: %f", avg);

	return 0;
}
