#include <stdio.h>

int main(){

    char str[100];
    char str_rev[100];
    gets(str);

    int i, j, count=0;

    while( str[count] != '\0'){
        count++;
    }

    j = count-1;

    for(i=0; i<=count; i++){
        str_rev[i] = str[j];
        j--;
    }
    printf("%s", str_rev);
}
