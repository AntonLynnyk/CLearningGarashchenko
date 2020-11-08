#include <stdio.h>

enum Value {Five = 5, Seven = 7, Eleven = 11, Thirteen = 13} number;

void FirstMethod(enum Value number)
{
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

int main()
{
    FirstMethod(Thirteen);

    DisplayTypeSize();

    int result;

    result = Compare(5,5);

    printf("%d\n", result);

    return 0;
}
