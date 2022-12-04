#include <stdio.h>
#include <stdlib.h>
//using namespace std;

typedef struct 
{
    double coef;
    unsigned deg;
}Monom;

void printPoly(const Monom * out, int n)
{
    printf("%lf^%u", out[0].coef, out[0].deg);
    for(int i = 1; i < n; i++)
    {
        printf("+ %lf^%u", out[i].coef, out[i].deg);
    }
    printf("\n");
}

int inputPoly(const char* fname)
{
    printf("m = ");
    unsigned m;
    scanf("%u", &m);

    Monom* arr = (Monom*) malloc(m * sizeof(*arr));

    for(unsigned i = 0; i < m; i++)
    {
        printf("coef = ");
        scanf("%lf", &arr[i].coef);

        printf("deg = ");
        scanf("%lf", &arr[i].deg);
    }

    FILE* fp = fopen(fname, "a+b");
    fwrite(&m, 1, sizeof(m), fp);

    fwrite(arr, m, sizeof(*arr), fp);
    fclose(fp);
    free(arr);

    return m;
}

int readPoly(FILE* fp)
{
    unsigned m; 
    fread(&m, sizeof(m), 1, fp);
    fseek(fp,sizeof(m) + m + sizeof(Monom), SEEK_CUR);
    return 1;
}

int outputPoly(const char* fname, unsigned num)
{
    FILE* fp = fopen(fname, "rb");
    int k = 0;
    do
    {
        int r = readPoly(fp);
        if(r != 1)
        {
            return 0;
        }
        k++;
    }while(k < num);

    unsigned m;
    int r = fread(&m, 1, sizeof(m), fp);
    if(r != 1) return 0;
    Monom* arr = (Monom*) malloc(sizeof(*arr) * m);
    int r2 = fwrite(arr, sizeof(*arr), 1, fp);

    printPoly(arr, m);
    free(arr);
    fclose(fp);
    return m;
}

int derPoly(const char* fname, unsigned num, Monom * out)
{
    FILE* fp = fopen(fname, "rb");
    int k = 0;
    do
    {
        int r = readPoly(fp);
        if(r != 1)
        {
            return 0;
        }
        k++;
    }while(k < num);

    unsigned m;
    int r = fread(&m, 1, sizeof(m), fp);
    if(r != 1) return 0;
    Monom* arr = (Monom*) malloc(sizeof(*arr) * m);
    int r2 = fwrite(arr, sizeof(*arr), 1, fp);

    for(int i = 0; i < m; i++)
    {
        out[i].coef *= arr[i].deg;
        out[i].deg = arr[i].deg--;
    }
    
    free(arr);
    fclose(fp);
    return m;
}

int addPoly(const char * fname, const Monom* out, int n)
{
    FILE* fp = fopen(fname, "a+b");
    fwrite(&n, 1, sizeof(n), fp);

    fwrite(out, n, sizeof(*out), fp);
    fclose(fp);

    return n;
}

int main()
{
    char *fname = "poly1.dat";

    int n;
    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        inputPoly(fname);
    }

    outputPoly(fname, n);
}




