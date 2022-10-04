#include <stdio.h>

int main()
{
    float f1, f2;
    scanf("%f", &f1);
    scanf("%f", &f2);
    float f3 = f1 - f2;
    float f4 = f1 * f2;
    int i1 = (int)f3;
    int i2 = (int)f4;
    printf("%f %f\n", f3, f4);
    printf("%i %i", i1, i2);
}