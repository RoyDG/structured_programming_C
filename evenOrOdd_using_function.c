#include <stdio.h>

int even_odd(int x){

   if (x % 2 == 0){
    printf("The given number is Even\n");
   }
   else{
    printf("The given number is Odd\n");
   }
}

int main() {

    int n;
    printf("Enter number : ");
    scanf("%d",&n);


    even_odd(n);

  return 0;
}
