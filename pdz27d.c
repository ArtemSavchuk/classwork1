#include <stdio.h>
#include <math.h>

void pif()
{
    double eps;
    printf("eps = ");
    scanf("%lf", &eps);

    double k = 1;
    double d1 = 1 / (k * k * k * k);
    double d_sum = d1;
    double sum = d1;
    double d2;
    while(d_sum > eps)
    {
        k = k + 1;
        d2 = sqrt(sqrt(90 * sum));
        d1 = 1 / (k * k * k * k);
        sum = sum + d1;
        d_sum = sqrt(sqrt(90 * sum)) - d2;
    }
    double pi = sqrt(sqrt(90 * sum));
    printf("pi = %.20lf", pi);


}

int main()
{
    pif();
}