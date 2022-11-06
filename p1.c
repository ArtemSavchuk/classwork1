#include <stdio.h>
#include <math.h>

void p6a()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    double b;
    printf("b = ");
    scanf("%lf", &b);

    double sum = b;
    for(int i = 1; i <= n; i++)
    {
        sum = b + 1/sum;
    }
    printf("sum = %lf", sum);
}

void p6b()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    double sum = 4*n + 2;
    for(int i = 1; i <= n; i++)
    {
        sum = (4*(n - i)+2) + 1/sum;
    }
    printf("sum = %lf", sum);
}
void p6v()
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    int zn = -1;
    int pk = -1;
    double sum = 2;
    for(int i = 1; i <= n; i++)
    {
        zn *= pk;
        if(zn == -1)
        {
            sum = 2 + 1/sum;
        }
        else
        {
            sum = 1 + 1/sum;
        }
    }
    printf("sum = %lf", sum);
}
void p7()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    
    double a1 = 0, a2 = 1, ai;
    double b1 = 1, b2 = 0, bi;

    double s1 = 2/(a1+b1);
    double S = s1;

    if(n==1) printf("\nS = %lf", S);

    S += 4 /(a2+b2);
    
    if(n==2) printf("\nS = %lf", S);

    int power2 = 4;
    for(int i=3;i<=n;i++){

        bi = a2+b2;
        ai = a2/i + a1 * bi;

        power2 *= 2;
        S += power2/(ai +bi);

        a1 = a2;
        a2 = ai;
        b1 = b2;
        b2 = bi;
    }
    //return S;
    printf("\nS = %lf", S);
}

double p8a(double x, double eps)
{
    double sum = 1;
    double dodanok = 1; 

    int i = 1;
    while (fabs(dodanok) >= eps)
    {
        dodanok = dodanok * (x / i);
        i++;
        sum += dodanok;
    }
    return sum;
    
}

double p8b(double x, double eps)
{
    double y = x - x*x*x/3;
    int i = 0;

    double dodanok = -x * x * x /3;

    while (fabs(dodanok) > eps)
    {
        i++;
        dodanok *= (-x*x) / (2 * i) / (2*i + 1) / (2*i + 3) * (2*i+ 1);
        y += dodanok;
    }
    return y;
    
}

double fun(double x)
{
    return tan(x) - x;
}

double p19(double a, double b, double eps)
{
    if(fun(a)*fun(b) > 0) return 0;

    double c = (a + b) / 2;
    if(b - a < eps)
    {
        return c;
    }

    if(fun(a) * fun(c) < 0)
    {
        return p19(a, c, eps);
    }
    return p19(c, b, eps);
}

int main()
{
    p6a();
    p6b();
    p6v();
    p7();
    
    //for task 8a
    double x1, eps1;

    printf("Input x = ");
    scanf("%lf", &x1);

    do{
        printf("input positive eps: ");
        scanf("%lf", &eps1);
    }while (eps1 <= 0);

    printf("ps(%g) = %lf", x1, p8a(x1, eps1));
    // for task 8b
    double x, eps;

    printf("Input x = ");
    scanf("%lf", &x);

    do{
        printf("input positive eps: ");
        scanf("%lf", &eps);
    }while (eps <= 0);

    printf("Phi(%g) = %lf", x, p8b(x, eps));
    
    //for task 19
    double a = 0.001;
    double b = 1.5;
    double eps = 1e-5;

    printf("root: %lf", p19(a, b, eps));
}