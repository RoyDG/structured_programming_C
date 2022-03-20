#include <stdio.h>

int fact(int x){

    if (x == 1){
        return 1;
    }
    else {
        return x * fact ( x-1 );
    }
}


int main(){

    int n;
    printf("Enter Factorial Number : ");
    scanf("%d",&n);

    int result = fact(n);
    printf("The Factorial of %d is : %d\n",n,result);

    return 0;

}
