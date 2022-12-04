#include <stdio.h>
#include <stdlib.h>

double** Ainputarr(int n)
{
    int i, j;

    double** arr = (double**) malloc(n * sizeof(double));

    for (i = 0; i < n; i++) 
    {
        arr[i] = (double*) calloc (n, sizeof (double));
    }

    if(!arr) 
    {
        printf("No allocated memory");
        return -1;
    }

    for (i = 0; i < n; i++)
    {   
        for(j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%lf", &arr[i][j]);
        }
    }

    return arr;
}

void AshowArray(double** arr, int n)
{   
    int i, j;

    printf("A)res: \n");

    for (i = 0; i < n; i++)
    {   
        for(j = 0; j < n; j++)
        {
            printf("%g ", arr[i][j]);
        }

        printf("\n");
    }
}

double** Amultiplication(double** arr, double** arr1, const int n)
{   
    int i, j, k;

    double** res = (double**) malloc(n * sizeof(double));

    for (i = 0; i < n; i++) 
    {
        res[i] = (double*) calloc (n, sizeof (double));
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {   

            for(k = 0; k < n; k++)
            {   
                res[i][j] += arr[i][k] * arr1[k][j];
            }
        }
    }

    return res;

}

void paragraphA(const int n)
{
    double** arr;
    double** arr1;
    double** res;

    arr = Ainputarr(n);
    arr1 = Ainputarr(n);

    res = Amultiplication(arr, arr1, n);

    AshowArray(res, n);

    free(arr);
    free(arr1);
    free(res);
}

double* Binputarr(int n)
{   
    int i, j;

    double* arr = (double*) calloc(n * n, sizeof(double));

    if(!arr) 
    {
        printf("No allocated memory");
        return -1;
    }

    for (i = 0; i < n; i++)
    {   
        for(j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%lf", &arr[i*n + j]);
        }
    }

    return arr;
}

double* Bmultiplication(double* arr, double* arr1, const int n)
{
    int i, j, k;

    double* res = (double*) calloc(n * n, sizeof(double));

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {   

            for(k = 0; k < n; k++)
            {   
                res[i*n + j] += arr[i*n + k] * arr1[k*n + j];
            }
        }
    }

    return res;
}

void BshowArray(double* arr, int n)
{
    int i, j;

    printf("B)res: \n");

    for (i = 0; i < n; i++)
    {   
        for(j = 0; j < n; j++)
        {
            printf("%g ", arr[i*n + j]);
        }

        printf("\n");
    }
}

void paragraphB(const int n)
{
    double* arr;
    double* arr1;
    double* res;

    arr = Binputarr(n);
    arr1 = Binputarr(n);
    
    res = Bmultiplication(arr, arr1, n);

    BshowArray(res, n);

    free(arr);
    free(arr1);
    free(res);
}

void allFunc()
{
    const int n = 3;

    paragraphA(n);

    paragraphB(n);
    
}

int main()
{
    allFunc();
}