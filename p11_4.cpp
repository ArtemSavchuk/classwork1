#include <iostream>
using namespace std;

typedef struct
{
    int x1;
    int y1;
    int x2;
    int y2;

}Rectangle;

void outPutRectangle(Rectangle &r)
{
    printf("((%d %d),(%d %d))", r.x1, r.x2, r.y1, r.y2);
}

Rectangle inputRect()
{
    Rectangle rect;
    printf("x1 = ");
    int x1;
    scanf("%d", &x1);
    rect.x1 = x1;

    printf("y1 = ");
    scanf("%d", &rect.y1);
    
    printf("x2 = ");
    scanf("%d", &rect.x2);

    printf("y2 = ");
    scanf("%d", &rect.y2);

    return rect;
}


int fileCreator(const char * fname)
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    Rectangle arr[n];
    for(int i = 0; i < n; i++)
    {
        Rectangle r = inputRect();
        arr[i] = r;
    }

    for(int i = 0; i < n; i++)
    {
        printf("((%d %d),(%d %d))", arr[i].x1, arr[i].x2, arr[i].y1, arr[i].y2);
    }




    FILE *f = fopen(fname, "ab");
    for(int i = 0; i < n; i++)
    {
        int number = i;
        fwrite(&number, sizeof(number), 1, f);
        fwrite(&arr[i], sizeof(arr[i]), 1, f);
    }

    fclose(f);

    return n;
}



void fileReader(int n, const char * fname)
{
    Rectangle arr[n];

    FILE* f = fopen(fname, "rb");
    for(int i = 0; i < n; i++)
    {
        int number;
        fread(&number, sizeof(int), 1, f);
        fread(&arr[i], sizeof(Rectangle), 1, f);

    }
    fclose(f);

    for(int i = 0; i < n; i++)
    {
        outPutRectangle(arr[i]);
    }
    fclose(f);
}

int main()
{
   int n = fileCreator("myfile.dat");
   fileReader(n, "myfile.dat");
}