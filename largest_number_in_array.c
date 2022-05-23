#include <stdio.h>


int main(){
  int arr[100], size, i, max = 0;

  printf(" Enter the size of array: ");
  scanf("%d", &size);

  printf(" Enter %d Elements : ", size);

  for (i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }

  for (i = 1; i < size; i++){
    if (arr[i] > arr[max])
        max = i;
  }

  printf(" Index of Max Value is: %d\n And its value is: %d\n", max+1, arr[max]);
  return 0;
}
