#include <stdio.h>

int main()
{
    float x;
    scanf("%f", &x);

    float a1 = x * x;
    float a2 = a1 * a1;
    printf("p1 = %f\n", a2);

    float b1 = x * x * x;
    float b2 = b1 * b1;
    printf("p2 = %f\n", b2);

    float c1 = x * x;
    float c2 = c1 * x;
    float c3 = c1 * c2;
    float c4 = c3 * c2 * x;
    printf("p3 = %f\n", c4);

    float d1 = x * x * x;
    float d2 = d1 * d1;
    float d3 = d2 * d1;
    float d4 = d3 * d1;
    float d5 = d4 * d1;
    printf("p4 = %f\n",d5);
    
    float e1 = x * x * x * x * x * x;
    float e2 = e1 * e1;
    float e3 = e2 * e1;
    float e4 = e3 * e1;
    float e5 = x * x * x * x;
    float e6 = e4 * e5;
    printf("p5 = %f\n", e6);

    float g1 = x * x;
    float g2 = g1 * x;
    float g3 = g2 * x;
    float g4 = g3 * x;
    float g5 = g3 * g4;
    float g6 = g5 * g5 * g5 * g5 * g5 * g5 * g5 * g5;
    printf("p6 = %f\n", g6);


}