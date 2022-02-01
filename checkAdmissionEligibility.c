#include <stdio.h>

int main(){

    int math, phy, chem, total,mp;
    printf("the marks obtained in math : ");
    scanf("%d",&math);
    printf("the marks obtained in Physics : ");
    scanf("%d",&phy);
    printf("the marks obtained in chemestry : ");
    scanf("%d",&chem);

    total = math+phy+chem;
    mp = math+phy;

    if( total >= 190 && mp >= 140 ){
        printf("\nTotal marks of Maths, Physics and Chemistry: %d\n", total);
        printf("Total marks of Maths and Physics: %d\n", mp);
        printf("The candidate is eligible for admission.\n");
    }
    else{
        printf("\nTotal marks of Maths, Physics and Chemistry: %d\n", total);
        printf("Total marks of Maths and Physics: %d\n", mp);
        printf("The candidate is not eligible for admission.\n");
    }
    return 0;
}
