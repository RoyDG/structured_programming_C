#include <stdio.h>

int swap(int x, int y){

    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("After swapping : A = %d and B = %d\n",x,y);
}

int main() {

    int a, b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    printf("Before swapping : A = %d and B = %d\n",a,b);

    swap(a,b);

  return 0;
}
