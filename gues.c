#include <stdio.h>  // مكتبه عشان نقدر نستخدم دوال الادخال والاخراج
#include <stdlib.h> // مكتبه عشان نقدر نستخدم دوال توليد الارقام العشوائيه
#include <time.h>  // مكتبه عشان نقدر نستخدم دوال الوقت زي time() و srand() لتوليد الارقام العشوائيه
#include <cs50.h> // مكتبه عشان نقدر نستخدم دوال الادخال من المستخدم زي get_string و get_int و get_char
int main(void)
{
    //   رقم عشوائي
    srand(time(0)); // تهيئة مولد الأرقام العشوائية باستخدام الوقت الحالي كـ seed
    int secret_number = rand() % 20 + 1;  // رقم عشوائي كبير يتقسم ويتجمع علي 20+1


    string name = get_string("ادخل اسمك: "); // طلب من المستخدم إدخال اسمه وتخزينه في متغير name
     

    int guess = 0;    // تخزين رقم صيغته integer
    int attempts = 0;  // تخزين عدد المحاولات

    printf("hi \n");
    printf("أنا اخترت رقم من 1 إلى 20\n");
    printf("حاول تخمينه!\n\n");

    // حلقة اللعبة
    while (guess != secret_number)
    {
        printf("ادخل تخمينك: ");
        scanf("%d", &guess); // قراءة التخمين من المستخدم
        attempts++; // زيادة عدد المحاولات

        if (guess < secret_number)
        {
            printf("ur number is too low!\n");
        }
        else if (guess > secret_number)
        {
            printf("ur number is too high!\n\n");
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
