#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Enter first number: ");
    int y = get_int("Enter second number: ");

  char op = get_char("Enter operation (+, -, *, /): ");
  if (op == '+')
  {

    printf("Result: %d\n", x + y);
  }
  else if (op == '-')
  {
    printf("Result: %d\n", x - y);
  }
  else if (op == '*')
  {
    printf("Result: %d\n", x * y);
  }
  else 
  {


      printf("Result: %.2f\n", (float)x / y);
    }






return 0;



}