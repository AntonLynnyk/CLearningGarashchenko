#include <stdio.h>

void FirstMethod(int number)
{
    printf("Here are multiple numbers of your number: ");

    for (int i = number; i < 10000; i+=number)
    {
        printf("%d ", i);
    }

    printf("\n");
}

void DisplayTypeSize()
{
    printf(" char in bytes = %d\n ",sizeof (char));

    printf("short in bytes = %d\n ",sizeof (short));

    printf("int in bytes = %d\n ",sizeof (int));

    printf("unsigned int in bytes = %d\n ",sizeof (unsigned int));

    printf("float in bytes = %d\n ",sizeof (float));

    printf("double in bytes = %d\n ",sizeof (double));
}

int Compare(int a, int b)
{
    if (a == b)
    {
        return 0;
    }
    else if (a > b)
    {
        return 1;
    }
    else return -1;
}

void MoveBites()
{
    unsigned char x = 0b00010010;

    unsigned char n = x << 3;

    unsigned char m = n >> 2;

    printf("Number before the move is %d\n", x);

    printf("Number after triple left shift is %d\n", n);

    printf("Number after double right shift is %d\n", m);
}

int XOR (char a, char b)
{
    if (a != 0)
    {
        a = 1;
    }

    if (b != 0)
    {
        b = 1;
    }

    char c = a ^ b;

    printf("XOR of these variables can be 1 - true or 0 - false. Result: %d\n", c);

    return 0;
}

void PrintBites(int x)
{
    int firstLoopVar = x;

    int cellCounter = 0;

    while (firstLoopVar > 0)
    {
        firstLoopVar = firstLoopVar / 2;

        cellCounter++;
    }

    int Binary[cellCounter];

    int unit;

    while (x > 0)
    {
        unit = x % 2;

        x = x / 2;

        Binary[cellCounter - 1] = unit;

        cellCounter--;
    }

    printf("Your number in binary is: ");

    for (int i = 0; i < sizeof(Binary) / sizeof (Binary[0]); i++)
    {
        printf("%d", Binary[i]);
    }

    printf("\n");
}

int main()
{
    FirstMethod(101);

    DisplayTypeSize();

    int result = Compare(5,5);

    printf("a == b = 0, a > b = 1, a < b = -1. Result: %d\n", result);

    MoveBites();

    XOR(-127,0);

    PrintBites(12456);

    return 0;
}
