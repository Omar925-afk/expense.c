#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Enter first number: ");
    int y = get_int("Enter second number: ");
    printf("%d\n", x + y);
    return 0;
}


