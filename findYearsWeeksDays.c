#include <stdio.h>

int main(){

    int day,week,year,input;

    printf("input total number of days: ");
    scanf("%d", &input);

    year = input/365;
    week = input/7;
    day = input%7;

    printf("%d Day %d Week %d Year \n",day,week,year);
    return 0;
}
