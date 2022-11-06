#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#define N 5
#define N1 10
#define N4 50
//#define M_E
//#define _USE_MATH_DEFINES



void p1()
{
    int mas[5] = {1, 2, 4, 44, 3};

}

void p1_1()
{   
    int mas[5] = {1, 2, 4, 44, 3};
    double a;
    printf("a = ");
    scanf("%lf", &a);

    int cnt = 0;
    for(int i = 0; i < 5; i++)
    {
        if(mas[i] < a) cnt++;
    }
    printf("cnt = %d", cnt);
}

void p2()
{
    int mas2[] = {5, 112, 4, 3};

    size_t M = sizeof(mas2) / sizeof(mas2[0]);

    for(int i = M-1; i >= 0; i--)
    {
        printf("%d", mas2[i]);
    }
}

double sumEuler(double mas[], size_t n)
{
    double res = 0;
    for(size_t i = 0; i < n; i++)
    {
        if(mas[i] > M_E)
        {
            res += mas[i];
        }
        return res;
    }
}
void p3_1()
{
    double mas3[N1];
    for(int i = 0;i < N1; i++)
    {
        printf("a[%d] = ", i);
        scanf("%lf", &mas3[i]);
    }
    double s1 = sumEuler(mas3, N1);
    printf("s = %lf", s1);
}

void p4()
{
    int mas[5];
    for(int i = 0; i < 5; i++)
    {
        printf("mas[%d] = ", i);
        scanf("%lf", &mas[i]);
    }
    int max_el = mas[0];
    for(int i = 1; i < 5; i++)
    {
        if(mas[i] > max_el) max_el = mas[i];
    }
    printf("max = %d", max_el);
}

void oddSodds(int * m, int n)
{
    unsigned odds = 0, evens = 0;
    for(int i = 0; i < n; i++)
    {
        if(m[i] % 2 == 0)
        {
            evens++;
        }
        else
        {
            odds++;
        }
    }
    printf(" %u Odd numbers, %u even numbers \n", odds, evens);
}

void p5()
{
    unsigned mas4[N4];
    unsigned tmp;
    int k = 0;

    do
    {
        printf("mas[%d] = ", k);
        scanf("%u", &tmp);
        mas4[k++] = tmp;
    } while (k < N4 && tmp != 0);

    oddSodds(mas4, k);
    
}

/**
* Input vector;
* @args vect [out] - double*
* @result int - siz of vector
*/
void inputVector(double* vect, int k)
{
    for(int i = 0; i < k; i++)
    {
        printf("ar[%d] = ", i);
        scanf("%lf", &vect[i]);
    }
}

void outputVector(const double* vect, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("ar[%d] = %lf\n", i, vect[i]);
    }
}

void sumVector(const double* v1, const double* v2, int n, double* v)
{
    for(int i = 0; i < n; i++)
    {
        v[i] = v1[i] + v2[i];
    }
}

double multVector(const double* v1, const double* v2, int n)
{
    double sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum = sum + v1[i] * v2[i];
    }
    printf("sum = %lf", sum);
}


void p6()
{
    printf("n = ");
    const int n;
    scanf("%d", &n);

    double v1[20];
    double v2[20];

    inputVector(v1, n);
    inputVector(v2, n);
    double v3[20];
    sumVector(v1, v2, n, v3);
    outputVector(v3, n);
    multVector(v1, v2, n);


}


int main()
{
    //p2();
    //p5();
    p6();
}
/*
int inputVector(double* vect)
{
    double tmp;
    int k = 0;
    do
    {
        scanf("%lf", &tmp);
        vect[k++] = tmp;
    } while (k < NV && fabs(tmp) < 0.00001);
    
}
*/
/*
int sumVector(const double* v1, const double* v2, int n, double* v)
{
    for(int i = 0; i < n; i++)
    {
        v[i] = v1[i] + v2[i];
    }
    return 0;
}
*/