#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%lf %lf %lf\n", a, b, c);
    double pp = (double)(a + b + c)/2;
    double ger = sqrt(pp * (pp - a) * (pp - b) * (pp - c));
    printf("%lf", ger);
}