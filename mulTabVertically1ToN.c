#include <stdio.h>

int main()
{
   int a,b,n;
   printf("Input upto the table number starting from 1 : ");
   scanf("%d",&n);
   printf("Multiplication table from 1 to %d \n",n);

   for(a=1;a<=10;a++){
        printf("\n");
        for(b=1;b<=n;b++){
            if(b<=n-1){
                printf("%dx%d = %d, ",b,a,b*a);
            }
            else{
                printf("%dx%d = %d ",b,a,b*a);
            }
      }
    }
    return 0;
}

