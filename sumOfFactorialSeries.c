#include <stdio.h>

int fact(int n){

    int i = 0, f = 1;

    while(i < n){
        f = f + f*i;
        i++;
    }
    return f;
}
int main(){
    int sum;
    sum = fact(1)/1 + fact(2)/2 + fact(3)/3 + fact(4)/4 + fact(5)/5;
    printf("The sum of the series is : %d\n",sum);

    return 0;
}


