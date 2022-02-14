#include <math.h>
#include <stdio.h>


int main() {

   int  num,temp,rm,
        count = 0,
        sum = 0;
   printf("Enter an integer: ");
   scanf("%d", &num);
   temp = num;

   while(temp != 0) {
        temp /= 10;
        count++ ;
   }
   temp = num;

   while(temp != 0) {
        rm = temp % 10;
        sum += pow(rm, count);
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
