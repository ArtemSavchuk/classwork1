#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 25
#define M 25
#define MAX 100


void inputArray(double arr[][N], int m, int n)
{
    
    char sentence[MAX] = "a";

    fgets(sentence, MAX, stdin);

    for (int i = 0; i < m; i++)
    {   
        printf("%d row: ", i);
        fgets(sentence, MAX, stdin);

        char* sen = sentence;
        char* end;

        for (int j = 0; j < n; j++)
        {
            int num = strtol(sen, &end, 10);

            arr[i][j] = num;

            sen = end;
        }
    }

}

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

void allFunc()
{
    int m, n;
    double arr[M][N];

    printf("m = ");
    scanf("%d", &m);

    printf("n = ");
    scanf("%d", &n);

    inputArray(arr, m, n);

    showArray(arr, m, n);

    return 0;
}

int main()
{   
    allFunc();
}