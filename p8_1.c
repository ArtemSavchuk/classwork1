#include <stdio.h>

void showArray(int arr[][3])
{
    int i, j;

    printf("arr: \n");


    for (i = 0; i < 3; i++)
    {   
        for (j = 0; j < 3; j++)
        {


            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }
}

void replace(int arr[][3], int n, int m)
{
    if (m <= 9 && m >= 1)
    {
        int i, j;

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if(arr[i][j] == m)
                {
                    arr[i][j] = n;


                    printf("element was replaced! \n");
                }
            }
        }
    } else 
    {
        printf("element was not replaced\n");
    }
}

void allFunc()
{
    int arr[3][3] = 
    {{3, 2, 3},{4, 8, 6},{7, 6, 9}};

    showArray(arr);

    int n, m;

    printf("n = ");
    scanf("%d", &n);

    printf("m = ");
    scanf("%d", &m);

    replace(arr, n, m);

    showArray(arr);

   
}

int main()
{   
    allFunc();
}