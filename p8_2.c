#include <stdio.h>

void showArray(double arr[][3])
{
    int i, j;
    printf("arr: \n");
    for (i = 0; i < 3; i++)
    {   
        for (j = 0; j < 3; j++)
        {
            printf("%lf ", arr[i][j]);
        }

        printf("\n");
    }
}

void replace(double arr[][3], int n, int m, double a)
{
    if (m <= 2 && m >= 0 && n <= 2 && n >= 0)
    {
        arr[n][m] = a;
    } 
    else 
    {
        printf("try another indexes\n");
    }
}

void allFunc()
{
    double arr[3][3] = {
        {1.0, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int i, j;
    double a;

    printf("i = ");
    scanf("%d", &i);

    printf("j = ");
    scanf("%d", &j);

    printf("a = ");
    scanf("%lf", &a);

    replace(arr, i, j, a);

    showArray(arr);

}

int main()
{  
    allFunc(); 
     
}