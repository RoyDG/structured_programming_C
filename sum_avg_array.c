#include <stdio.h>

int main(){

    int sum = 0, i, size;

    printf("Enter Array Size : ");
    scanf("%d",&size);

    int arr[size];
    printf("\nArray Elements : ");

    for (i=0; i<size; i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("\nThe sum is : %d\n",sum);
    printf("The avg is : %.2f\n",(float)sum/size);

}
