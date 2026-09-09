#include <stdio.h>
#include <cs50.h>
int main (void)
{


  string name = get_string(" how much student are: ");

 int n = get_int("enter number of student: ");

// مصفوفه ARRAYS


  int highst = 0;
  int score[n];

  for(int i=1; i<n; i++)
    {
        score[i] =get_int("score: ");

        if (score[i] > highst)
        {
            highst = score[i];
        }



    }

           printf(" highst is %0.2f ", (float) highst );

}