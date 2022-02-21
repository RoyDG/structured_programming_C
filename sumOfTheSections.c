 // 1+2+3+4+.....1000 what is the The sum of the sections.

 #include <stdio.h>

 int main(){

     int n, sum;
     scanf("%d", &n);

     sum = (n * (n + 1)) / 2;
     printf("Summation is %d\n", sum);

     return 0;
 }
