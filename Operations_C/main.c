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
    int cellsAmount = sizeof (x) * 8; //8 bits in 1 byte
    int loopCounter = cellsAmount;
    int unit;
    int Binary[cellsAmount];

    for(int i = 0; i < cellsAmount; i++)
    {
        Binary[i] = 0;
    }

    while (x > 0)
    {
        unit = x % 2;

        x = x / 2;

        Binary[loopCounter - 1] = unit;

        loopCounter--;
    }

    printf("Your number in binary is: ");

    for (int i = 0; i < cellsAmount; i++)
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
