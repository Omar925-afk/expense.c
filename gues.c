#include <stdio.h>  // مكتبه عشان نقدر نستخدم دوال الادخال والاخراج
#include <stdlib.h> // مكتبه عشان نقدر نستخدم دوال توليد الارقام العشوائيه
#include <time.h>

int main(void)
{
    // سيد رقم عشوائي
    srand(time(0));
    int secret_number = rand() % 100 + 1;  // رقم من 1 إلى 100

    int guess = 0;
    int attempts = 0;

    printf("مرحبا بك في لعبة تخمين الرقم!\n");
    printf("أنا اخترت رقم من 1 إلى 100\n");
    printf("حاول تخمينه!\n\n");

    // حلقة اللعبة
    while (guess != secret_number)
    {
        printf("ادخل تخمينك: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret_number)
        {
            printf("الرقم أكبر من تخمينك!\n\n");
        }
        else if (guess > secret_number)
        {
            printf("الرقم أصغر من تخمينك!\n\n");
        }
        else
        {
            printf("مبروك! خمنت الرقم بشكل صحيح!\n");
            printf("الرقم هو: %d\n", secret_number);
            printf("عدد المحاولات: %d\n", attempts);
        }
    }

    return 0;
}
