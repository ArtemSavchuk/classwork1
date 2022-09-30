#include <stdio.h>

int main()
{
    double T = 365;
    double T1 = (1 / (double)(4 + 1 / (double)(7 + 1 / (double)(1 + (double)1/3))));
    double T2 = T + T1;
    printf("%f\n", T2);
    //printf("T = %g", T2);
}