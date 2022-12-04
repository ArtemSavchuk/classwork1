#include <stdio.h>
#define N 20
#define M 20

void showArray(double arr[][N], int m, int n)
{
    int i, j;
    printf("arr: \n");
    for (i = 0; i < m; i++)
    {   
        for (j = 0; j < n; j++)
        {
            printf("%g ", arr[i][j]);
        }

        printf("\n");
    }
}

void inputArray(double arr[][N], int m, int n)
{
    int i, j;

    for (i = 0; i < m; i++)
    {   
        for (j = 0; j < n; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%lf", &arr[i][j]);
        }
    }
}


void allFunc()
{
    int m, n;
    double arr[M][N];

    printf("n = ");
    scanf("%d", &n);

    printf("m = ");
    scanf("%d", &m);

    inputArray(arr, m, n);

    showArray(arr, m, n);

    return 0;
}


int main()
{   
    
}