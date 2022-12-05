#include <stdio.h>
#include <stdlib.h>

int fileCreator(const char * name)
{
    FILE* f = fopen(name, "wb");

    int n;
    printf("n = ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        int el;
        printf("el[%d] = ", i);
        scanf("%d", &el);
        arr[i] = el;
    }

    fwrite(&arr, sizeof(int), n, f);

    fclose(f);
    return n;
}

int func(const char * name, int n)
{
    FILE *f = fopen(name, "rb");

    int arr[n];

    fread(&arr, sizeof(int), n, f);

    int first = arr[0];
    int last = arr[n - 1];

    int dif = first - last;

    fclose(f);   

    return dif;
}

void allFunc()
{

    int n = fileCreator("myfile.dat");
    int dif = func("myfile.dat", n);

    printf("\ndif = %d", dif);

    //free(name);
}


int main()
{
    allFunc();
}