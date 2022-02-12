#include <stdio.h>

int main() {

    int num, temp, rm, sum = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    temp = num;

    while (temp != 0) {
        rm = temp % 10;
        sum += rm*rm*rm;
        temp /= 10;
    }

    if (sum == num){
        printf("%d is an Armstrong number.", num);
    }

    else{
        printf("%d is not an Armstrong number.", num);
    }

    return 0;
}
