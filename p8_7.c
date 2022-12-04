#include <stdio.h>
#include <stdlib.h>
#define N 4

void inputArray(int arr[][N])
{
    int i, j;

    for (i = 0; i < N; i++)
    {   
        for (j = 0; j < N; j++)
        {
            arr[i][j] = rand()%10;
        }
    }
}

void showArray(int arr[][N], int n)
{
    int i, j;
    printf("arr: \n");
    for (i = 0; i < n; i++)
    {   
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
}


void getSmallerMatrix(int arr[][N], int innerArr[][N], int i, int j, int m)
{   
    int couni = 0, counj;

    for (int ii = 0; ii < m - 1; ii++)
    {   
        counj = 0;
        if(ii == i)
        {
            couni = 1;
        }

        for(int jj = 0; jj < m - 1; jj++)
        {
            if(jj == j)
            {
                counj = 1;
            }

            innerArr[ii][jj] = arr[ii + couni][jj + counj];
        }
    }
}

int determ(int arr[][N], int n)
{   
    int res = 0, k = 1, m = n - 1;
    int innerArr[N][N];

    if(n < 1)
    {
        printf("There is some trouble....");
        res = 0;
    }
    else if(n == 1)
    {
        res =  arr[0][0];
    }
    else if (n == 2)
    {
        res = arr[0][0] * arr[1][1] - (arr[1][0] * arr[0][1]);
    }
    else
    {
        for (int i = 0; i < n; i++) 
        {
            getSmallerMatrix(arr, innerArr, i, 0, n);

            res +=  k * arr[i][0] * determ(innerArr, m);

            k = -k;
        }

    }   

    return res;
}

void allFunc()
{
    int arr[N][N], res = 0;

    inputArray(arr);

    showArray(arr, N);

    res = determ(arr, N);

    printf("determinant = %d", res);

    return 0;
}

int main()
{   
   allFunc(); 
}