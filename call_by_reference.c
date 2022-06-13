#include <stdio.h>


long addTwoNumbers(long *n1, long *n2){
   long sum;
   sum = *n1 + *n2;
   return sum;
}

int main(){

   long a, b, sum;
   printf(" call by reference:\n");

   printf(" Input the first number : ");
   scanf("%ld", &a);
   printf(" Input the second  number : ");
   scanf("%ld", &b);

   sum = addTwoNumbers(&a, &b);
   printf(" The sum of %ld and %ld  is : %ld\n\n", a, b, sum);
   return 0;
}
