#include <stdio.h>


int main(){
  int arr[100], size, i, min = 0;

  printf(" Enter the size of array: ");
  scanf("%d", &size);

  printf(" Enter %d Elements : ", size);

  for (i = 0; i < size; i++){
    scanf("%d", &arr[i]);
  }

  for (i = 1; i < size; i++){
    if (arr[i] < arr[min])
        min = i;
  }

  printf(" Index of Minimum Value is: %d\n And its value is: %d\n", min+1, arr[min]);
  return 0;
}
