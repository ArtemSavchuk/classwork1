#include <stdio.h>
#include <math.h>

double ReLu(double x)
{
    if(x > 0) return x;
    return 0;
}

double Pr_ReLu(double x)
{
    double dx = 0.000001;
    //
    //double reluZn1, reluZn2;
    //reluZn1 = ReLu(x);
    //reluZn2 = (ReLu(x + dx));
    //printf("r1 = %lf, r2 = %lf\n", reluZn1, reluZn2);
    //
    printf("dx = %lf\n", dx);
    double deriv = (ReLu(x + dx) - ReLu(x)) / dx;
    return deriv;
}


int main()
{   
    double x;
    printf("x = ");
    scanf("%lf", &x);

    double der = Pr_ReLu(x);
    printf("derivative = %lf\n", der);
    //double r1 = ReLu(11);
    //double r2 = ReLu(5);
    //printf("%lf %lf\n", r1, r2);


    
}