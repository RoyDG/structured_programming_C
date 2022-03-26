#include <stdio.h>

int main(){

    int i, pos, size;

    printf("Enter array size : ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter %d elements of array : \n\n", size);

    for(i=0; i<size; i++){
	      printf("Element - %d : ", i+1);
	      scanf("%d", &arr[i]);
    }

    printf("\nEnter Array Index Number To Delete: ");
    scanf("%d", &pos);

    if(pos<=0 || pos>size){
        printf("Invalid position");
    }
     else{

      for (i = pos - 1; i < size-1; i++){
        arr[i] = arr[i+1];
      }
        printf("\nRemaining Array:\n\n");

      for (i = 0; i < size-1; i++){
       printf("Element - %d : %d\n",i+1, arr[i]);
      }
   }
   return 0;
}
