// Program to calculate the sum of digits(10 numbers max)
#include <stdio.h>

int main(){
   int i;
   double number, sum = 0.0;
   printf("Enter number: ");
   scanf("%lf", &number);

   for (i = 1; i <= number; ++i){
      if (number < 0.0){
         break;
      }
     sum = sum + i;
   }
   printf("Sum = %.2lf", sum);

   return 0;
}
