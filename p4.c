#include <stdio.h>
#include <math.h>

double func(double x)
{
    double x1 = x * x * x;
    double res = x1 * x1 * x1 + x1 + 1;
    return res;
}

int main()
{
    double x;
    scanf("%lf", &x);
    double res = func(x);
    printf("%lf\n", res);
}