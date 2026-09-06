#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // 1. تهيئة الرقم العشوائي
    srand(time(NULL));
    int secret_number = (rand() % 100) + 1;
    int guess;
    int attempts = 0;

    printf("--- اهلا بك في لعبة تخمين الرقم ---\n");
    printf("لقد اخترت رقماً بين 1 و 100. هل يمكنك معرفته؟\n\n");

    // 2. حلقة التكرار: تستمر طالما أن التخمين لا يساوي الرقم السري
    do
    {
        printf("أدخل تخمينك: ");
        scanf("%i", &guess);
        attempts++; // زيادة عدد المحاولات في كل مرة

        if (guess > secret_number)
        {
            printf("خطأ! الرقم السري (أصغر) من ذلك. حاول مرة أخرى.\n");
        }
        else if (guess < secret_number)
        {
            printf("خطأ! الرقم السري (أكبر) من ذلك. حاول مرة أخرى.\n");
        }
        else
        {
            printf("\nمبروك! لقد حزرت الرقم الصحيح وهو %i\n", secret_number);
            printf("لقد استغرقت %i محاولات للفوز.\n", attempts);
        }

    } while (guess != secret_number);

    return 0;
}
