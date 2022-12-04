#include <stdio.h>

int in_File()
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    double ar[n];
    for(int i = 0; i < n; i++)
    {
        printf("el[%d] = ", i);
        scanf("%lf", &ar[i]);
    }

    FILE *ff = fopen("myfile.bin", "wb");
    fwrite(&ar, n * sizeof(double), n, ff);
    fclose(ff);

    return n;

}

void out_File(int n, double ar[])
{
    FILE *ff = fopen("myfile.bin", "rb");

    double byte[n];
    fread(&byte, sizeof(double), n, ff);
    for(unsigned int i = 0; i < n; i++)
    {
        printf("%lf, ", byte[i]);
    }

    fclose(ff);
}



int main()
{
    //helpp();
    int n = in_File();
    double ar[n];
    out_File(n, ar);
}

