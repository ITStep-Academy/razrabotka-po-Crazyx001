﻿#include <iostream>
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

int main10()
{
    int a = 1, b = 1, c = 1, d = 1;

    a++;
    
    b *= 25 + a;

    c--;

    b -= 3 * d;

    printf("%d %d %d %d", a, b, c, d);

    return 0;
}

int main11()
{
    int x, d11, d12, d21, d22, d31, d32, d41, d42;

    printf("Please input a number: ");
    scanf_s("%d", &x);

    d11 = x % 2;
    d12 = x / 2;

    d21 = d12 % 2;
    d22 = d12 / 2;

    d31 = d22 % 2;
    d32 = d22 / 2;

    d41 = d32 % 2;
    d42 = d32 / 2;

    printf("%d > %d%d%d%d", x, d41, d31, d21, d11);

    return 0;
}

int main12()
{
    int x, d1, d2, d3, d4, d5, d6, d7, d8, d9;

    printf("Please input a number: ");
    scanf_s("%d", &x);

    d1 = x / 100000000;
    d2 = x / 10000000 % 10;
    d3 = x / 1000000 % 10;
    d4 = x / 100000 % 10;
    d5 = x / 10000 % 10;
    d6 = x / 1000 % 10;
    d7 = x / 100 % 10;
    d8 = x / 10 % 10;
    d9 = x % 10;

    x = d1 * 256;
    x += d2 * 128;
    x += d3 * 64;
    x += d4 * 32;
    x += d5 * 16;
    x += d6 * 8;
    x += d7 * 4;
    x += d8 * 2;
    x += d9 * 1;

    printf("%d %d%d%d%d %d%d%d%d > %d", d1, d2, d3, d4, d5, d6, d7, d8, d9, x);

    return 0;
}

int main13()
{
    int x;

    printf("Please input a number: ");
    scanf_s("%o", &x);

    printf("%o > %d", x, x);

    return 0;
}

int main14()
{
    int x;

    printf("Please input a number: ");
    scanf_s("%d", &x);

    printf("%d > %x", x, x);

    return 0;
}

int main15()
{
    int x;

    printf("Please input a number: ");
    scanf_s("%x", &x);

    printf("%x > %d", x, x);

    return 0;
}