#include <stdio.h>

int ExpressionCount(int n, int k)
{
    int sum = 0;

    for(int i = 1; i <= n; i++)
    {
        sum += i * k;
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

    int result = ExpressionCount(n, k);

    PrintResult(result);

    return 0;
}
