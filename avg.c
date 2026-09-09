#include <stdio.h>
#include <cs50.h>
int main (void)
{


  string name = get_string(" how much student are: ");

 int n = get_int("enter number of student: ");

// مصفوفه ARRAYS


    int highst = 0;

    for (int i = 0; i < n; i++)
    {
      int score = get_int("score: ");

      if (score > highst)
        {
        highst = score;
        }

    }

    printf("highest is %f\n", (float) highst);

}