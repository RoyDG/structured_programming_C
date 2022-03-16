#include <stdio.h>

int math(int n, int a, int b){

    int sum;

    if(n == 1){
        sum = a + b;
    }
    else if(n == 2){
        sum = a - b;
    }
    else if(n == 3){
        sum = a * b;
    }
    else if(n == 4){
        sum = a / b;
    }
    return sum;
}

int main (){

    int num, x, y, equation;

    printf("1.Sum\n2.Sub\n3.Mul\n4.Div\n\n");
    printf("Select 1 or 2 or 3 or 4 : ");
    scanf("%d",&num);
    printf("\nEnter two number: ");
    scanf("%d%d",&x,&y);

    equation = math(num,x,y);
    printf("\nThe Result is : %d\n",equation);

    return 0;

}
