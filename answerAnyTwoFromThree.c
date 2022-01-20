#include <stdio.h>

int main(){

    int a, b, c, inp1, inp2;
    printf("answer any two from a,b,c: ");
    scanf("%d%d", &inp1,&inp2);
    a = 20;
    b = 30;
    c = 50;


    if(inp1 == a && inp2 == b || inp2 == a && inp1 == b){
        printf("Answer is a and b: %d and %d", a,b);
    }
    else if(inp1 == b && inp2 == c || inp2 == b && inp1 == c){
        printf("Answer is b and c: %d and %d", b,c);
    }
    else if(inp1 == a && inp2 == c || inp2 == a && inp1 == c){
        printf("Answer is a and c: %d and %d", a,c);
    }
    else {
        printf("not applicable");
    }

    return 0;
}
