#include <stdio.h>

int main() {

  char ch;
  double x, y;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &ch);
  printf("Enter two operands: ");
  scanf("%lf %lf", &x, &y);

  switch (ch) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", x,y, x+y);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", x,y, x-y);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", x,y, x*y);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", x,y, x/y);
      break;

    default:
      printf("Error!");
  }

  return 0;
}
