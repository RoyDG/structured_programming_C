#include <stdio.h>

int main() {
  int i,j;
  for(i=1; i<=20; i++){
      printf("\n");
    for(j=1; j<=10; j++){
        printf(" %d x %d = %d\n",j,i,j*i);
    }
  }

  return 0;
}
