#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;
    printf("Give numbers\n");
    scanf("%f %f", &a, &b);
    //printf("%f\n, %f\n", a, b);

    float res = sqrt(a*a + b*b);
    printf("res = %f", res);
}