#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int in_File()
{
    FILE *ff = fopen("myfile.bin", "wb");
    int *arr = NULL; // calloc(1, sizeof(int));
    int n = 1;
    while (true)
    {
        int k;
        printf("el = ");
        scanf("%d", &k);
        if (k != 0)
        {
            n++;
            arr = (int *)realloc(arr, sizeof(int) * n);
            arr[n - 1] = k;
        }
        else
        {
            break;
        }
    }

    int arr1[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        arr1[i] = arr[i + 1];
    }
    /*
    for(int i = 0; i < n-1; i++)
    {
        printf("%d ", arr1[i]);
    }
    */

    fwrite(&arr1, (n - 1) * sizeof(double), (n - 1), ff);

    fclose(ff);
    free(arr);

    return (n - 1);
}

void form_new_file(int n)
{
    int arr[n];
    FILE *ff = fopen("myfile.bin", "rb");
    fread(&arr, sizeof(int), n, ff);
    // for(unsigned int i = 0; i < n; i++)
    //{
    //     printf("%d, ", arr[i]);
    // }

    int *arr1 = NULL;
    int arr1_size = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 3)
        {

            int counter = 0;
            for (int j = 2; j < arr[i]; j++)
            {
                if (arr[i] % j == 0)
                {
                    counter++;
                    // break;
                }
            }
            if (counter == 1)
            {
                arr1_size++;
                // arr = (int*) realloc(arr, sizeof(int) * n);
                arr1 = (int *)realloc(arr1, sizeof(int) * arr1_size);
                arr1[arr1_size - 1] = arr[i];
            }
        }
    }

    for (int i = 0; i < arr1_size; i++)
    {
        printf("%d ", arr1[i]);
    }

    FILE *ff2 = fopen("myfile1.bin", "wb");
    //fwrite(&arr1, (n - 1) * sizeof(double), (n - 1), ff);
    fwrite(arr1, sizeof(int), arr1_size, ff2);
    fclose(ff2);
    free(arr1);
    fclose(ff);

    FILE *ff_prov = fopen("myfile1.bin", "rb");
    int arr2[arr1_size];
    fread(&arr2, sizeof(int), arr1_size, ff_prov);
    printf("\n");
    for (int i = 0; i < arr1_size; i++)
    {
        printf("%d ", arr2[i]);
    }
    fclose(ff_prov);
}

int main()
{
    int n = in_File();
    form_new_file(n);
}