#include <stdio.h>
#include <cs50.h>
int main (void)
{


  string name = get_string(" how much student are: ");

 int n = get_int("enter number of student: ");

// مصفوفه ARRAYS


  int score[n];

  for(int i=0; i<n; i++)
    {
        score[i] =get_int("score: :");


    }

           printf(" highst is %0.2f ", (float)  (score[0]  score[1] score [2] )  /n );


}