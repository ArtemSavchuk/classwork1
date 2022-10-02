#include <stdio.h>

int main()
{
    double a;
    scanf("%lf", &a);
    printf("- | - | %f | - | -\n", a);
    printf("- | %f | %f | %f | -\n", a, a, a);
    printf("%f | %f | %f | %f | %f", a, a, a, a, a);
}