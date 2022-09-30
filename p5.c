#include <stdio.h>
#include <math.h>

double Rosenbrock2d(double x, double y)
{
    double res = 100 * (x*x - y)*(x*x - y) + (x-1)*(x-1);
    return res;
}

int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);
    double res = Rosenbrock2d(x, y);
    printf("%lf\n", res);
}