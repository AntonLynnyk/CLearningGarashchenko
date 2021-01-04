#include <stdio.h>

char letter = 65; // 'A'

int number = 0x1;   // 1

long biggerNumber = 0x64;   // 100

short smallerNumber = 0x80; // 128

int FF = 0xFF;  // 256

float const PI = 3.141592653F;

unsigned int const US = 2;

char string[] = "The string";

enum Week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday} day;

void TestMethod4(enum Week day)
{
    if (day == Sunday) {
        printf("Sunday\n");
    } else if (day == Monday) {
        printf("Monday\n");
    } else if (day == Tuesday) {
        printf("Tuesday\n");
    } else if (day == Wednesday) {
        printf("Wednesday\n");
    } else if (day == Thursday) {
        printf("Thursday\n");
    } else if (day == Friday) {
        printf("Friday\n");
    } else if (day == Saturday) {
        printf("Saturday\n");
    } else {
        printf("Not a day of a week\n");
    }
}

void TestMethod3(enum Week day)
{
    switch(day)
    {
        case Sunday:
            printf("Today is Sunday\n");
            break;
        case Monday:
            printf("Today is Monday\n");
            break;
        case Tuesday:
            printf("Today is Tuesday\n");
            break;
        case Wednesday:
            printf("Today is Wednesday\n");
            break;
        case Thursday:
            printf("Today is Thursday\n");
            break;
        case Friday:
            printf("Today is Friday\n");
            break;
        case Saturday:
            printf("Today is Saturday\n");
            break;
        default:
            printf("Not a day of a week\n");
            break;
    }
}

void TestMethod2()
{
    int a = 0x1;

        printf("%d\n", a);

    int a2 = 01;

        printf("%d\n", a2);

    int a3 = 0b1;

        printf("%d\n", a3);

    int b = 0x64;

        printf("%d\n", b);

    int b2 = 0144;

        printf("%d\n", b2);

    int b3 = 0b1100100;

        printf("%d\n", b3);

    int c = 0x80;

        printf("%d\n", c);

    int c2 = 0200;

        printf("%d\n", c2);

    int c3 = 0b10000000;

        printf("%d\n", c3);

    int d = 0x100;

        printf("%d\n", d);

    int d2 = 0400;

        printf("%d\n", d2);

    int d3 = 0b100000000;

        printf("%d\n", d3);
}

void TestMethod1()
{
    printf("Hello World!\n");
}

int main()
{
    TestMethod1();

    TestMethod2();

    TestMethod3(Monday);

    TestMethod4(Friday);

    printf("Our string: %s\n", string);

    printf("You and me are %.u\t\n", US);

    printf("PI 2 numbers after dote %.2f\n", PI);

    printf("PI 5 numbers after dote %.5f\n", PI);

    printf("PI 9 numbers after dote %.9f\n", PI);

    printf("Hello World\n");

    for (int i = 0; i < 256; i++) {
        printf("%c ", i);
    }

    return 0;
}
