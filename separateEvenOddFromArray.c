#include <stdio.h>

int main(){

    int i, j=0, k=0, n;

    printf("Enter array size : ");
    scanf("%d",&n);

    int arr1[n], arr2[n], arr3[n];
    printf("Enter %d elements of array : \n\n", n);

    for(i=0; i<n; i++){

	      printf("Element - %d : ", i);
	      scanf("%d", &arr1[i]);

        if (arr1[i]%2 == 0){
            arr2[j] = arr1[i];
            j++;
        }
        else{
            arr3[k] = arr1[i];
            k++;
        }
    }

    printf("\nThe Even elements are : ");
    for(i=0; i<j; i++){
        printf("%d ",arr2[i]);
    }

    printf("\nThe Odd elements are : ");
    for(i=0; i<k; i++){
        printf("%d ", arr3[i]);
    }

    getch ();
    return 0;
 }
