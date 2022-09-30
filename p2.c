#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>


int main()
{
    float f1 = 0.0001f;
    float f2 = 24.33f * 100000;
    float f3 = M_PI;
    float f4 = M_E;
    float f5 = pow(5, 0.5); 
    float f6 = log(100);
    printf("%.2f, %.2f, %.2f, %.2f, %.2f, %.2f", f1, f2, f3, f4, f5, f6);
}
