#include <stdio.h>
#include <math.h>

int main()
{
    float f1;
    scanf("%f", &f1);
    
    //1 variant
    float i_low = floor(f1);
    float dr = f1 - i_low;
    float i_high = ceil(f1);
    printf("%f, %f, %f\n", dr, i_low, i_high);

    //2 variant

    float i_low1 = (int)f1;
    float i_high1 = (i_low1 / abs(i_low1)) + i_low1;
    float dr1 = f1 - i_low1;
    printf("%f, %f, %f\n", dr1, i_low1, i_high1);


}