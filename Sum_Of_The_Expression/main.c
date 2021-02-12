#include <stdio.h>

int Count(int a, int b)
{
    int sum = 0;
    int temp;

    for(int i = 1; i <= a; i++)
    {
        temp = i * b;
        sum += temp;
    }
    return sum;
}

void PrintResult(int result)
{
    printf("Result of the expression is: %d\n", result);
}

int main()
{
    printf("This program can find sum of the expression: 1k + 2k + 3k + … + Nk");
    printf("Please enter your N and k after space.\n");
    int n;
    int k;
    scanf("%d%d", &n, &k);

    int result = Count(n, k);

    PrintResult(result);

    return 0;
}
