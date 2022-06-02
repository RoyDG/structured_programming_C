#include<stdio.h>
//Direct recursion example

int fibo_num (int i){
    // if the num i is equal to 0, return 0;
    if ( i == 0){
        return 0;
    }
    if ( i == 1){
        return 1;
    }
    return fibo_num (i - 1) + fibo_num (i -2);
}

int main (){
    int i, n;
    printf("Enter number: ");
    scanf("%d",&n);
    // for loop to get the first 10 fibonacci series
    for ( i = 0; i < n; i++){
        printf (" %d \t ", fibo_num (i));
    }
    return 0;
}
