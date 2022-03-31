#include <stdio.h>
#include <string.h>

int main(){
    char s[30];
    char s2[30];
    scanf("%s",s);
	int len = 0,i=0,j;

	while(s[i] != '\0'){
		i++;
		len++;
	}
	for(j=0, i=len-1; i>=0; i--,j++){
		s2[j]=s[i];
	}

    int x = strcmp(s,s2);

    if(x==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
