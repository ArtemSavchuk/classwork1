#include <stdio.h>

void z18e()
{
    int k;
    printf("k = ");
    scanf("%d", &k);

    double x;
    printf("x = ");
    scanf("%lf", &x);

    double zn = 1, x1 = 1, k_fact = 1;

    for(int i = 1; i <= k; i++)
    {
        x1 = x1 * x;
        zn = zn * (-1);
        k_fact = k_fact * i;
    }
    double zn_v = zn * x1 / k_fact;
    printf("zn = %lf", zn_v);
    
}

int main()
{
    z18e();
}