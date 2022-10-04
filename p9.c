#include <stdio.h>

int main()
{
    float f1, f2;
    scanf("%f %f", &f1, &f2);
    float f3 = (f1 + f2)/2;
    float f4 = 2/(1/f1 + 1/f2);
    printf("%E %E\n", f3, f4);

    int i3 = (int)f3;
    int i4 = (int)f4;
    printf("%i %i", i3, i4);
    
}