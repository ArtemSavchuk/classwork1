#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    double r, h;
    scanf("%lf %lf", &r, &h);
    double s = M_PI * r * r;
    double v = s * h * (double)1/3;
    printf("\nv = %lf", v);
}