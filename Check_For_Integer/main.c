#include <stdio.h>

int main()
{
    printf("This program will check whether the entered number is an integer or not.\n");
    printf("Please enter your number: \n");

    double a;

    scanf("%lf", &a);

    int b;
    b = a;

    printf("%lf\n", a);
    printf("%d\n", b);

    if(a == b)
    {
        printf("Your number is an integer.\n");
    }
    else
    {
        printf("Your number is not an integer.\n");
    }

    getchar();
    return 0;
}
