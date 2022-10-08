#include <stdio.h>

void p1()
{
    double a;
    printf("n = ");
    scanf("%lf", &a);

    double s = 0;
    int i = 1;
    while(s < a)
    {
        s += 1.0/i;
        i++;
    }
    printf("S(%d) = %lf > %lf", i, s, a);
    
}


unsigned long long Fib(unsigned n)
{
    unsigned long long F0 = 0, F1 = 1UL, F = 1Ul;
    if(n == 0) return 0;
    if(n == 1) return 1;

    for(unsigned i = 2; i <= n; i++)
    {
        F = F0 + F1;
        F0 = F1;
        F1 = F;
    }
    return F;
}
void p2a()
{
    unsigned n;
    printf("n = ");
    scanf("%u", &n);
    printf("F(%u) = %Lu\n", n, Fib(n));
}



unsigned long long FibLess(double a)
{
    unsigned long long F0 = 0, F1 = 1UL, F = 1Ul;
    if(a < 1) return 0;
    if(a < 2) return 1;
    int k = 0;

    for(;F < a;)
    {
        F = F0 + F1;
        F0 = F1;
        F1 = F;
        k += 1;
    }
    return k;
}
void p2b()
{
    //unsigned n;
    //printf("n = ");
    //scanf("%u", &n);

    double a;
    printf("a = ");
    scanf("%lf", &a);
    printf("k = %d\n",FibLess(a));
}

void p2v()
{
    int n = 1;
    double a;
    printf("a = ");
    scanf("%lf", &a);
    double f1 = 0, f2 = 1, t;

    if(a < 0)
    {
        n = 0;
    }
    else
    {
        while(f2 <= a)
        {
            t = f2;
            f2 = f2 + f1;
            f1 = t;
            n++;
        } 
    }
    printf("%d", n);
}

void p2g()
{
    int n = 1;
    double a = 1000;
    double f1 = 0, f2 = 1, s = 0, t;

    if(a < 1)
    {
        s = 0;
    }
    else
    {
        while(f2 <= a)
        {
            t = f2;
            s = s + f2;
            f2 = f2 + f1;
            f1 = t;
        } 
    }
    printf("%lf", s);
}

int p3_vsp(int k, int n)
{
    int a0 = n;
    if(k == 0) return a0;
    for(int i = 1; i <= k; i++)
    {
        if(a0 % 2 == 0)
        {
            a0 = a0 /2;
        }
        else
        {
            a0 = 3 * a0 + 1;

        }
        
    }
    return a0;
}

void p3()
{
    int n, k;
    //printf("n = ");
    //scanf("%d", &n);
    //printf("k = ");
    //scanf("%d", &k);
    //printf("\nzn = %d", p3_vsp(k, n));
    int MaxI = 0;
    int MaxJ = 0;
    for(int j = 1; j < 1000; j++)
    {
        int a1 = p3_vsp(1, j);
        int i = 1;
        while(a1 != 1)
        {
            i++;
            a1 = p3_vsp(i, j);
            if(i > 1000000) 
            {
                printf("we break the conjecture!!!");
                break;
            }
            //printf("a[%d]=%d\n", i, p3_vsp(i, n));
        }
        printf("I = %d", i);
        if(i > MaxI)
        {
            MaxI = i;
            MaxJ = j;
        }
    }

    printf("\nMax i = %d for j = %d\n", MaxI, MaxJ);
    int a2 = MaxJ;
    int i = 0;
    while (a2 != 1)
    {
        i++;
        a2 = p3_vsp(i, MaxJ);
        printf("%d ", a2);
    }
    
    
}

void p4a()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    double P = 1;
    double inv_fact = 1.0;

    for(int i = 1; i <= n; i++)
    {
        inv_fact /= i;
        P *= (1 +inv_fact);
    }
    printf("\nP = %lf", P);
}

void p4b()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    double P = 1;
    double inv_dv = 2;
    

    for(int i = 1; i <= n; i++)
    {
        inv_dv *= 2;
        if((i+1)%2 == 0)
        {
            P *= (1 + i*i/inv_dv);
        }
        else
        {
            P *= (1 + (-1)*i*i/inv_dv);
        }
    }
    printf("\nP = %lf", P);
}

void p5()
{
    int a0, a1, a2;
    printf("a0, a1, a2 = ");
    scanf("%d %d %d", &a0, &a1, &a2);

    int x1 = a0;
    int x2 = a1;
    int x3 = a2;

    int xn = 0;
    int i = 2;

    while(xn <= 0)
    {
        xn = x1 + x3 + 100;
        x1 = x3;
        x2 = x3;
        x3 = xn;
        i++;
    }
    printf("i = %d", i);
    
}

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

int main()
{
    //p1();
    //p2a();
    //p2b();
    //p2v();
    //p2g();
    //p3();
    //p4a();
    //p4b();
    //p5();
    //p6a();
    //p6b();
    //p6v();
    p7();


}