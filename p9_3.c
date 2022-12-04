#include <stdio.h>
#include <stdlib.h>

int* inputarr(int n)
{
    int i = 0;

    int* arr = (int*) malloc(n * sizeof(int));

    if(!arr) 
    {
        printf("No allocated memory");
        return -1;
    }

    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d", &arr[i]);
    }

    return arr;
}

void showArray(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d \n", i, arr[i]);
    }
}

int* substactArrays(int* arr, int* arr1, int n)
{
    int i = 0;

    int* res = (int*) malloc(n * sizeof(int));

    if(!arr && !arr1 && !res) 
    {
        printf("No allocated memory");
        return -1;
    }

    for (i = 0; i < n; i++)
    {
        res[i] = arr[i] - arr1[i];
    }

    return res;

}

void allFunc()
{
    int N = 5;
    int* arr;
    int* arr1;
    int* res;

    arr = inputarr(N);
    arr1 = inputarr(N);

    res = substactArrays(arr, arr1, N);

    showArray(res, N);

    free(arr);
    free(arr1);
    free(res);
}

int main()
{   
    
    allFunc();
    return 0;
}