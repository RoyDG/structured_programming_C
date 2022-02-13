#include <math.h>
#include <stdio.h>


int main() {

   int num, temp, rm, count = 0, sum = 0;
   printf("Enter an integer: ");
   scanf("%d", &num);
   temp = num;

   for (temp = num; temp != 0; count++) {

        temp /= 10;
   }
   for (temp = num; temp != 0; temp /= 10) {

        rm = temp % 10;
        sum += pow(rm, count);
   }
   if (sum == num){
        printf("%d is an Armstrong number.", num);
   }
   else{
        printf("%d is not an Armstrong number.", num);
   }

   return 0;
}
