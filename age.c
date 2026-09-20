#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age =get_int ("what is ur age: " );

     printf (" ur age in days is %i\n", age *365 );
}
