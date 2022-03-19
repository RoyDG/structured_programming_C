#include <stdio.h>

int main(){
    int i, sum = 0, max, min, size;
    float avg;

    printf("Enter Array Size : ");
    scanf("%d",&size);

    int arr[size];
    printf("\nEnter Array Elements : \n");

    for(i = 0; i < size;  i++){

        printf("Element - %d : ", i);
        scanf("%d", &arr[i]);

        max = arr[0];
        min = arr[0];

        sum = sum + arr[i];

        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    avg = sum/(float)size;

    printf("\nSummation is : %d\n", sum);
    printf("Average is : %.2f\n", avg);
    printf("Maximum number is : %d\n", max);
    printf("Minimum number is : %d\n", min);


    return 0;
}
