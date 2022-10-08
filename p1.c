#include <stdio.h>
#include <math.h>

void task1()
{
    unsigned i,n;
    float x,y;

    printf("x = ");
    scanf("%f", &x);

    printf("n=");
    scanf("%u", &n);

    for(i = 0; i < n; i++)
    {
        y = sin(y);
    }

    printf("y=%f", y);
}

void task2()
{
    unsigned i,n;
    scanf("%u", &n);

    printf("%u!=", n);
    for(i = 1; i < n; i++)
    {
        printf("%d*", i);
    }
    printf("%d\n", n);

    printf("%u!=", n);
    for(i = n; i > 0; i--)
    {
        printf("%d*", i);
    }
    printf("\n", n);
}

void task3a()
{
    unsigned i, n;
    float x, y, power;
    printf("x = ");
    scanf("%f", &x);

    printf("n = ");
    scanf("%u", &n);

    y = 1;
    power = 1;

    for(i = 1; i <= n; i++)
    {
        power *= x;
        y += power;
    }
    printf("y = %f\n", y);
}

void task3b()
{
    unsigned i, n;
    float x, y, power, sum;
    printf("x = ");
    scanf("%f", &x);

    printf("y = ");
    scanf("%f", &y);

    printf("n = ");
    scanf("%u", &n);
    sum = 1;
    float y1 = y;
    float x1 = x;
    float s_sum;
    for(i = 1; i <= n; i++)
    {
        sum = sum + x1 * y1;
        y1 = y1 * y;
        x1 = x1 * x1;
    }
    printf("sum = %f\n", sum);
}

void task5()
{
    unsigned n;
    int res = 1;
    printf("n = ");
    scanf("%i", &n);
    for(int i = n; i > 0; i-=2)
    {
        res = res * i;
        printf("i = %i\n", i);
    }
    printf("res = %i\n", res);
}

void task4()
{   
    double n, x;
    printf("n = ");
    scanf("%lf", &n);
    printf("x = ");
    scanf("%lf", &x);
    //printf("x = %lf n = %lf", x, n);
    double x1 = x;
    double n1 = 1;
    double sum = 0;

    while(n1 <= n)
    {
        sum = sum + x1 * n1;
        x1 = x1 * x;
        n1 = n1 + 1;
        //printf("sum = %f x1 = %f n1 = %f", sum, x1, n1);
    }

    printf("sum = %lf", sum);

}

void task6a()
{
    unsigned n;
    printf("n = ");
    scanf("%i", &n);
    double k = sqrt(2);
    for(int i = 1; i < n; i++)
    {
        k = sqrt(2 + k);
    }
    printf("k = %lf", k);
}

void task6b()
{
    unsigned n;
    printf("n = ");
    scanf("%u", &n);

    double k = 3 * n;
    double sum = sqrt(k);

    for(int i = 1; i < n; i++)
    {
        k = k - 3;
        sum = sqrt(k + sum);
    }
    printf("k = %i", k);
    printf("sum = %lf", sum);
}

void task7()
{
    unsigned i, n;
    float x, y, a;

    printf("x = ");
    scanf("%f", &x);

    printf("n = ");
    scanf("%u", &n);

    y = 1;
    a = 1;

    for(unsigned i = 1; i <= n; i++)
    {
        a *= (x/i);
        y += a;
    }

    printf("y = %lf", y);
}

void task8()
{
    unsigned m, n;
    float x, y, a;

    x = 1;
    m = 0;

    printf("n = ");
    scanf("%u", &n);

    while(x < n)
    {
        x *= 4;
        m++;
    }
    printf("m = %u", m - 1);
    
}

void task9()
{
    unsigned m, n;
    float r = 1;

    printf("n = ");
    scanf("%u", &n);

    
    do{
        r *= 2;
    } while(r < n);
    printf("m = %lf", r);
}

void task10()
{
    float a = 1;
    int i = 1;
    while(1 + a != 1)
    {
        a = a / 2;
        i += 1;
    }
    printf("a = %.20lf", a);
    printf("\ni = %d", i);
}

int main()
{
    //task1();
    //task2();
    //task3a();
    //task3b();
    //task4();
    //task5();
    //task6a();
    //task6b();
    //task7();
    //task8();
    task9();
    //task10();
}