#include <stdio.h>
#include <cs50.h>
 int main(void)
{
    int n = get_int("Enter a number: "); // طلب من المستخدم إدخال رقم
    int num = get_int("Enter another number: "); // طلب من المستخدم إدخال رقم آخر
    int sum = n + num; // جمع الرقمين وتخزين النتيجة في متغير sum
    printf("The sum of %d and %d is: %d\n", n, num, sum); // عرض النتيجة للمستخدم
    return 0;
}