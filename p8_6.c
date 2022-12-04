#include <stdio.h>
#define N 100
#define M 100

void inputArray(int arr[][N], int m, int n)
{
    int i, j;

    for (i = 0; i < m; i++)
    {   
        for (j = 0; j < n; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

int sumArr(int arr[][N], int k)
{
    int i, j, sum = 0;

    for (i = 0; i < M; i++)
    {   
        for (j = 0; j < N; j++)
        {
            if (i - j == k)
            {
                sum += arr[i][j];
            }
        }
    }

    return sum;
}

void allFunc()
{
    int m, n, k = -2;
    double arr[M][N];

    printf("n = ");
    scanf("%d", &n);

    printf("m = ");
    scanf("%d", &m);

    inputArray(arr, m, n);

    int sum = sumArr(arr, k);
    
    printf("sum = %d", sum);

    return 0;
}

int main()
{
    allfunc();
}