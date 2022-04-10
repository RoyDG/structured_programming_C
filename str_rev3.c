#include <stdio.h>
#include <string.h>

int main(){
    int i, j, l;
    char str[100];
    char str_rev[100];
    gets(str);

    l = strlen(str);
    j = l-1;

    for(i=0; i<=l; i++){
        str_rev[i] = str[j];
        j--;
    }
    puts(str_rev);
}
