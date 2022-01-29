#include <stdio.h>

int main()
{
    int i, n, sum;
    sum = 0;

    printf("Input upper limit of even number: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2){
        sum += i;
    }

    printf("Sum of even number between 1 to %d: %d", n, sum);

    return 0;
}
