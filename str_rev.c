#include <stdio.h>
#include <string.h>


int main(){

    char s[100], c;
    gets(s);
    int l = strlen(s), i=0;

    while(i<l/2){
        c = s[i];
        s[i] = s[l-1-i];
        s[l-1-i] = c;
        i++;
    }
    puts(s);

}
