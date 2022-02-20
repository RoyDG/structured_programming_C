//Write a program in c to print s=ut+1/2at^2
#include <stdio.h>

int main(){

    double u,t,a,s=0,x,y,z;

    printf("input value of u, t & a: ");
    scanf("%lf %lf %lf",&u,&t,&a);

    x = u*t ;
    y = 0.5 ;
    z = (a*t) * (a*t);

    s = x + y * z;

    printf("s = %0.2lf",s);

    return 0;
}
