
#include <stdio.h>


int main(){

    int num,temp,rem,sum=0;

    printf("Enter positive numbers: ");
    scanf("%d",&num);
    temp = num;

    while(temp != 0){
        rem = temp%10;
        sum = sum*10 + rem;
        temp = temp/10;
    }

    if (num == sum){
        printf("%d = %d is a palindrome Number",num,sum);
    }
    else {
        printf("%d = %d is not a palindrome Number",num,sum);
    }

    getch ();
    return 0;

}
