#include <stdio.h>
#include <string.h>

int main(){

    char s[100];
    gets(s);
    int i, j=0, k=0, s1[100];

    for(i = strlen(s)-1; i>=0; i--){
        if(j==3){
            s1[k++] = ',';
            s1[k++] = s[i];
            j = 0;
        }
        else{
            s1[k++] = s[i];
        }
        j++;
    }
    for(i=k-1; i>=0; i--){
        printf("%c",s1[i]);
    }
    return 0;
}
