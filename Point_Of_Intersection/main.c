#include <stdio.h>
#include <math.h>

void PrintCoordinate(double x1, double x2, double y1, double y2)
{
    if(x1 == x2)
    {
        printf("Point of lines intersection is: [ %lf %lf", x1, y1);
        printf("]\n");
    }
    else
    {
        printf("There are two points of intersection of lines: [%lf %lf %lf %lf", x1, x2, y1, y2);
        printf("]\n");
    }
}

void CalculatePoint(double a, double b, double c, double d, double k, double *x1, double *x2, double *y1, double *y2)
{
    *x1 = (-(b-d) + sqrt(pow((b-d), 2)-4*a*(c-k))) / (2*a);
    *x2 = (-(b-d) - sqrt(pow((b-d), 2)-4*a*(c-k))) / (2*a);
    *y1 = d*(*x1)+k;
    *y2 = d*(*x2)+k;
}

int main()
{
    double a, b, c, d, k;
    double x1, x2, y1, y2;
    printf("This program will find a point of intersection.\n");
    printf("y=ax^2+bx+c  Please enter a, b, c.\n");

    printf("a, b, c = ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("y=dx+k       Please enter d, k.\n");

    printf("d, k = ");
    scanf("%lf %lf", &d, &k);

    CalculatePoint(a, b, c, d, k, &x1, &x2, &y1, &y2);

    PrintCoordinate(x1, x2, y1, y2);

    getchar();

    return 0;
}
