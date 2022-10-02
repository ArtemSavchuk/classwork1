#include <stdio.h>

int main()
{
    float m1, m2, r;
    scanf("%f, %f, %f", &m1, &m2, &r);
    float c1 = 6.673f * pow(10, -11);
    float res = c1 * ((m1 * m2) / (r * r));
    printf("\nres = %E", res);
}