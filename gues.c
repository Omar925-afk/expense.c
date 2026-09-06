#include <stdio.h>  // مكتبه عشان نقدر نستخدم دوال الادخال والاخراج
#include <stdlib.h> // مكتبه عشان نقدر نستخدم دوال توليد الارقام العشوائيه
#include <time.h>  // مكتبه عشان نقدر نستخدم دوال الوقت زي time() و srand() لتوليد الارقام العشوائيه

int main(void)
{
    //   رقم عشوائي
    srand(time(0)); // تهيئة مولد الأرقام العشوائية باستخدام الوقت الحالي كـ seed
    int secret_number = rand() % 100 + 1;  // رقم عشوائي كبير يتقسم ويتجمع علي 100+1

    int guess = 0;    // تخزين رقم صيغته integer
    int attempts = 0;  // تخزين عدد المحاولات

    printf("مرحبا بك في لعبة تخمين الرقم!\n");
    printf("أنا اخترت رقم من 1 إلى 100\n");
    printf("حاول تخمينه!\n\n");

    // حلقة اللعبة
    while (guess != secret_number)
    {
        printf("ادخل تخمينك: ");
        scanf("%d", &guess); // قراءة التخمين من المستخدم
        attempts++; // زيادة عدد المحاولات

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
            printf("الرقم هو: %d\n", secret_number);// عرض الرقم الصحيح d رقم صحيح نظام العد العشري
            printf("عدد المحاولات: %d\n", attempts);
        }
    }

    return 0; // إنهاء البرنامج بنجاح ونعيد تاني
    
}
