#include <stdio.h>

int num = 1;
int n;

int odd(){
    if (num <= n){
        printf (" %d ", num + 1);
        num++;
        even();
    }
    return;
}
int even (){
    if ( num <= n){
        printf (" %d ", num - 1);
        num++;
        odd();
    }
    return;
}
int main (){
    printf("Enter number: ");
    scanf("%d",&n);
    odd();
    return 0;
}
