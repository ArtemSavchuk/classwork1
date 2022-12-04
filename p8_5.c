#include <stdio.h>
#define N 3
#define M 3

void transpon(int arr[][N])
{
    int i, j;

    for (i = 0; i < M; i++)
    {   
        for (j = 0; j < i; j++)
        {   
            int a = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = a;
        }
    }
}

void showArray(int arr[][N])
{
    int i, j;
    printf("arr: \n");
    for (i = 0; i < M; i++)
    {   
        for (j = 0; j < N; j++)
        {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
}

void allFunc()
{
    int arr[M][N] = 
    {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    
    transpon(arr);

    showArray(arr);

    return 0;
}

int main()
{
    allFunc();
}