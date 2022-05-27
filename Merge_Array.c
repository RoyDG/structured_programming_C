#include <stdio.h>

int merge(int a[], int m, int b[], int n, int sorted[]){

  int i, j, k;

  j = k = 0;

  for (i = 0; i < m + n;) {
    if (j < m && k < n) {
      if (a[j] < b[k]) {
        sorted[i] = a[j];
        j++;
      }
      else {
        sorted[i] = b[k];
        k++;
      }
      i++;
    }
    else if (j == m) {
      for (; i < m + n;) {
        sorted[i] = b[k];
        k++;
        i++;
      }
    }
    else {
      for (; i < m + n;) {
        sorted[i] = a[j];
        j++;
        i++;
      }
    }
  }
}

int main(){

  int a[100], b[100], m, n, i, sorted[200];

  printf("Enter size of first array: \n");
  scanf("%d", &m);

  printf("Enter %d Elements: \n", m);
  for (i = 0; i < m; i++) {
    scanf("%d", &a[i]);
  }

  printf("Enter size of second array: \n");
  scanf("%d", &n);

  printf("Enter %d Elements: \n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &b[i]);
  }

  merge(a, m, b, n, sorted);

  printf("Merged array is: \n");

  for (i = 0; i < m + n; i++) {
    printf(" %d\n", sorted[i]);
  }

  return 0;
}
