#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    char name[50];
    int price;
    int from;
    int to;

}Toy;

Toy inputToy()
{
    Toy toy;
    for(int i = 0; i < 50; i++)
    {
        toy.name[i] = ' ';
    }
    printf("name = ");
    scanf("%s", (toy.name));

    printf("price = ");
    scanf("%d", &(toy.price));

    printf("min age = ");
    scanf("%d", &(toy.from));

    printf("max age = ");
    scanf("%d", &(toy.to));

    return toy;
}

void outputToy(Toy toy)
{
    printf("name = %s, price = %d, min age = %d, max age = %d\n", toy.name, toy.price, toy.from, toy.to);
}




int fileCreator(const char * name)
{
    FILE* f = fopen(name, "wb");

    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("n = %d\n", n);
    Toy arr[n];

    for(int i = 0; i < n; i++)
    {
        printf("i = %d\n", i);
        Toy t;
        t = inputToy();
        arr[i] = t;
    }
    /*
    for(int i = 0; i < n; i++)
    {
        outputToy(arr[i]);
    }
    */
    fwrite(&arr, sizeof(Toy), n, f);

    
    fclose(f);
    return n;
}

void findName(const char * name, int n, int m, int size)
{
    FILE *f = fopen(name, "rb");

    Toy arr[size];
    
    fread(&arr, sizeof(Toy), size, f);
    printf("new outputs\n");
    for(int i = 0; i < n; i++)
    {
        outputToy(arr[i]);
    }
    printf("toys, those kids can use:\n");
    FILE *f1 = fopen("newfile.dat", "ab");
    for(int i = 0; i < size; i++)
    {
        //printf("check1\n");
        if(arr[i].from < n && arr[i].to > n && arr[i].from < m && arr[i].to > m)
        {
            printf("%s, ", arr[i].name);
            fwrite(&(arr[i].name), sizeof(arr[i].name), 1, f1);
        }    
    }
    fclose(f1);
    fclose(f);
}

void help()
{
    //Toy toy = inputToy();
    //toy.from = 1;
    //toy.to = 3;
    //toy.price = 20;
    //toy.name = "t1";

    char n1[50];
    for(int i = 0; i < 50; i++)
    {
        n1[i] = ' ';
    }
    char n2[50];
    for(int i = 0; i < 50; i++)
    {
        n2[i] = ' ';
    }
    //printf("n = ");
    scanf("%s", &n1);
    scanf("%s", &n2);
    //printf("%d", n1 == n2);
    //printf("\nname = %s", toy.name);
    //printf("\n%s", (*n1));

    //char * n1_1 = malloc(sizeof(n1));
    //n1_1 = n1;

    //printf("n11 = %s", *n1_1);
    bool h = true;
    for(int i = 0; i < 50; i++)
    {
        if(n1[i] != n2[i]) h = false;
    }
    printf("%d", h);
    //free(n1);
    //free(n2);

}

void allFunc()
{
    int n = fileCreator("myfile.dat");
    findName("myfile.dat", 2, 5, n);
}

int main()
{
    allFunc();
    //help();
}