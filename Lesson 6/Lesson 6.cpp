#include <iostream>
#define SECONDS_IN_HOUR 3600
#define SECONDS_IN_MINUTE 60

int main1()
{
    double number, fractPart;
    int intPart;

    printf("Please input a number: ");
    scanf_s("%lf", &number);

    intPart = (int)number;
    fractPart = number - intPart;

    printf("Input number = %.2f\n", number);
    printf("Integral part = %d\n", intPart);
    printf("Fractional part = %.2f\n", fractPart);

    return 0;
}

int main2()
{
    int number;

    printf("Please input a number: ");
    scanf_s("%d", &number);

    printf("%d", number % 10);

    return 0;
}

int main3()
{
    int seconds, hours, minutes;

    printf("Please input a number: ");
    scanf_s("%d", &seconds);

    hours = seconds / SECONDS_IN_HOUR;
    seconds -= hours * SECONDS_IN_HOUR;

    minutes = seconds / SECONDS_IN_MINUTE;
    seconds -= minutes * SECONDS_IN_MINUTE;

    printf("%d hours, %d minutes, %d seconds", hours, minutes, seconds);

    return 0;
}

int main4()
{
    int a, b, t;

    printf("Please input two numbers: ");
    scanf_s("%d%d", &a, &b);

    t = a;
    a = b;
    b = t;

    printf("a = %d\nb = %d", a, b);

    return 0;
}

int main5()
{
    int a, b;

    printf("Please input two numbers: ");
    scanf_s("%d%d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("a = %d\nb = %d", a, b);

    return 0;
}

int main6()
{
    int number;

    printf("Please input a number: ");
    scanf_s("%d", &number);

    printf("%d", number / 10 % 10);

    return 0;
}

int main7()
{
    int x = 2147483647;

    printf("%d %d", x, x + 1);

    return 0;
}

int main8()
{
    printf("long long MIN = %lld\n", LLONG_MIN);
    printf("long long MAX = %lld\n", LLONG_MAX);

    return 0;
}

int main9()
{
    int x = -123;

    printf("%d %d", -123 / 10, -123 % 10);

    return 0;
}

int main9()
{
    int a = 1, b = 1, c = 1, d = 1;

    a++;
    
    b = (25 + a) * b;

    c--;

    b -= 3 * d;

    printf("%d %d", -123 / 10, -123 % 10);

    return 0;
}