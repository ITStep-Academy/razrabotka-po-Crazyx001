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

int main()
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