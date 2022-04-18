/* C program to delete all duplicate elements from array */

#include <stdio.h>


int main()
{
    int arr[100];
    int size;
    int i, j, k;

    /* Input size of the array */
    printf("Enter size of the array : ");
    scanf("%d", &size);

    /* Input elements in the array */
    printf("Enter elements in array : ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){

            if(arr[i] == arr[j]){
                for(k=j; k < size - 1; k++){
                    arr[k] = arr[k + 1];
                }
                size--;
                /* If shifting of elements occur then don't increment j */
                j--;
            }
        }
    }
    printf("\nArray elements after deleting duplicates : ");
    for(i=0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}
