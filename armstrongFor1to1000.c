#include <stdio.h>

int main() {

    int temp, rm, sum = 0, i;

    for (i=1; i<=1000; i++){

        temp = i;
        while (temp != 0) {
            rm = temp % 10;
            sum += rm*rm*rm;
            temp /= 10;
        }
        if (sum == i){
            printf("%d ", i);
        }

        sum = 0;
    }


    return 0;
}
