#include <stdio.h>


int main (){
    tail(7);
    return 0;
}

int tail( int num){

    if (num == 0)
        return;
    else
        printf ("\n Number is: %d", num);
    return tail (num - 1);
}
