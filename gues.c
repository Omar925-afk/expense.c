#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // تهيئة الرقم العشوائي
    srand(time(NULL));
    int secret_number = (rand() % 100) + 1;
    int guess = 0;
    int attempts = 0;

    printf("--- لعبة تخمين الرقم (نسخة CS50) ---\n");

    // استخدام while loop مع get_int من مكتبة cs50
    while (guess != secret_number)
    {
        guess = get_int("أدخل تخمينك: ");
        attempts++;

        if (guess > secret_number)
        {
            printf("أصغر! \n");
        }
        else if (guess < secret_number)
        {
            printf("أكبر! \n");
        }
        else
        {
            printf("مبروك! الرقم هو %i وعدد محاولاتك %i\n", secret_number, attempts);
        }
    }
}
