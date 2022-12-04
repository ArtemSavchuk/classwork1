#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int inputarr(int* arr)
{
    int i = 0;

    do
    {
        printf("a[%d] = ",i);

        int res = scanf("%d", &arr[i]);

        if (res != 1) return i;
        if (arr[i] == 0) break;

        i++;
    } while(true);

    return i;
}

bool isSqrt(int num)
{
    int cnt = 1;

    int inner = 1;

    while (inner <= num)
    {   
        cnt++;
        inner = pow(cnt, 2);

        if (inner == num)
        {
            return true;
        }
    }

    return false;
    
}

bool isCube(int num)
{
    int cnt = 1;

    int inner = 1;

    while (inner <= num)
    {   
        cnt++;
        inner = pow(cnt, 3);

        if (inner == num)
        {
            return true;
        }
    }

    return false;
}

void showSqrtCubes(const int* arr, int n)
{
    int cntSqrt = 0;
    int cntCubes = 0;

    for(int i = 0; i < n; i++)
    {
        
        if(isSqrt(arr[i]))
        {
            cntSqrt++;
        }

        if(isCube(arr[i]))
        {
            cntCubes++;
        }
        
    }

    printf("cntSqrt = %d, cntCubes = %d", cntSqrt, cntCubes);
}

void allFunc()
{
    const int N = 100;

    int* arr = calloc(N, sizeof(int));

    if(arr == NULL)
    {
        return -1;
    }

    int n = inputarr(arr);

    showSqrtCubes(arr, n);

    free(arr);
}


int main()
{
    
}