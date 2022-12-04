#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int inputArray(double* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%lf", &arr[i]);

    }
}


double sum_sqrt(double* arr, int n)
{
    double res = 0;

    for(int i = 0; i < n; i++)
    {
        res += pow(arr[i], 2); 
    }

    return res;
}

void allFunc()
{
    int n;

    printf("n = ");
    scanf("%d", &n);

    double * arr = (double*) malloc(n * sizeof(double));

    if(!arr) 
    {
        printf("No allocated memory");
        return -1;
    }

    int k = inputArray(arr, n);

    printf("Sum of sqrt = %g", sum_sqrt(arr, k));

    free(arr);
    
}


int main()
{
    allFunc();
    
    return 0;
}