#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    //check smallest
    if (num1 < num2 && num1 < num3)
    {

        printf("\n%d is the smallest number", num1);
    }
    else if (num2 < num3)
    {

        printf("\n%d is the smallest number", num2);
    }
    else
    {
        printf("\n%d is the smallest number", num3);
    }

    //check middle
    if (num2 > num1 && num1 > num3 || num3 > num1 && num1 > num2)
    {
        printf("\n%d is the middle number", num1);
    }
    else if (num1 > num2 && num2 > num3 || num3 > num2 && num2 > num1)
    {
        printf("\n%d is the middle number", num2);
    }
    else
    {
        printf("\n%d is the middle number", num3);
    }

    //check largest
    if (num1 > num2 && num1 > num3)
    {

        printf("\n%d is the largest number", num1);
    }
    else if (num2 > num3)
    {

        printf("\n%d is the largest number", num2);
    }
    else
    {
        printf("\n%d is the largest number", num3);
    }

    getch();
    return 0;
}
