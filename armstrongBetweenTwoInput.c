#include <stdio.h>



int main() {

   int temp, rm,initval,
        finalval,count,sum = 0;

   printf("initial value: ");
   scanf("%d", &initval);

   printf("final value: ");
   scanf("%d", &finalval);

   for (count = initval; count <= finalval; ++count) {

        temp = count;

        while( temp != 0) {

        rm = temp % 10;
        sum += rm*rm*rm;
        temp = temp/10;
   }
        if(sum == count){
            printf("%d ", count);
        }
        sum = 0;
   }



   return 0;
}
