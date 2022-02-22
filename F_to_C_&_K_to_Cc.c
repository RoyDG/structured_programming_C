/* write a C program converts temperature given
    in Fahrenheit and Kelvin to Celsius. */

#include<stdio.h>


int main()
{
	 float  fahr, kelvin, f_to_c, k_to_c;
	 printf("Enter temperature in Fahrenheit: ");
	 scanf("%f", &fahr);

	 printf("Enter temperature in Kelvin: ");
	 scanf("%f", &kelvin);

	 f_to_c = fahr - 32 / 1.8;
	 k_to_c = kelvin - 273.15;

	 printf("%0.2f Fahrenheit = %0.2f Celsius\n",fahr,f_to_c);
	 printf("%0.2f Kelvin = %0.2f Celsius",kelvin,k_to_c);
	 getch();

	 return(0);
}
