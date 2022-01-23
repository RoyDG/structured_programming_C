#include <stdio.h>

    /*  Write a C program to read the value of an integer m and
        display the value of n is 1 when m is larger than 0 and not 0 .
        display n = 0 when m is 0 and n = -1 when m is less than 0. */

int main()
{
   int m,n;
   printf("Input the  value of m :");
   scanf("%d",&m);

    if(m!=0 && m>0){
        n = 1;
   }
    else if(m < 0){
        n = -1;
     }
    else{
        n = 0;
   }
   printf("The value of n = %d \n",n);

   return 0;
}
