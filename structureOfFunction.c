#include <stdio.h>

    int sum (int a, int b) {
	    int s = a+b;
        return s;
    }


    int main (){
        int total;
        int x,y;
		printf("Enter two number :");
		scanf("%d%d",&x,&y);
        total = sum (x,y);
        printf ("The total sum is: %d\n",total);

        return 0;
    }

