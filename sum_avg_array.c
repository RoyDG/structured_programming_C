#include <stdio.h>

int main(){

    int sum = 0, i, size;

    printf("Enter Array Size : \n");
    scanf("%d",&size);
    int arr[size];

    for (i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    for (i=0; i<size; i++){
        sum = sum + arr[i];
    }
    printf("The sum is : %d\n",sum);
    printf("The avg is : %.2f\n",(float)sum/size);

}
