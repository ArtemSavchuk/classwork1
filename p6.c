#include <stdio.h>
#include <math.h>

double length(double x, double y, double x1, double y1)
{
    double res = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
    return res;
}

int main()
{
    double x1, y1, x2, y2, x3, y3;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    scanf("%lf %lf", &x3, &y3);
    //printf("%lf %lf %lf %lf %lf %lf", x1, y1, x2, y2, x3, y3);

    double st12 = length(x1, y1, x2, y2);
    double st13 = length(x1, y1, x3, y3);
    double st23 = length(x2, y2, x3, y3);

    double pp = (double)(st12 + st13 + st23)/2;
    double ger = sqrt(pp * (pp - st12) * (pp - st13) * (pp - st23));

    printf("%lf", ger);
}