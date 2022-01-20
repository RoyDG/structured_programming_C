#include <stdio.h>

int main(){

    int mark;
    printf("input mark: ");
    scanf("%d", &mark);

    if(mark >= 80 && mark <= 100) {
        printf("A+");
    }
    else if(mark >= 40 && mark <= 49){
        printf("c");
    }
    else if(mark >= 0 && mark <= 39){
        printf("F");
    }
    else{
        printf("mark not listed");
    }
    return 0;
}
