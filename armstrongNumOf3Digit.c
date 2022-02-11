#include <stdio.h>

int main() {

    int num, numA, numB, res = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    numA = num;

    while (numA != 0) {

        numB = numA % 10;
        numA /= 10;
        res += numB * numB * numB;
    }

    if (res == num){
        printf("%d is an Armstrong number.", num);
    }

    else{
        printf("%d is not an Armstrong number.", num);
    }

    return 0;
}
