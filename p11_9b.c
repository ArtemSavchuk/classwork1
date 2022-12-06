#include <stdio.h>
#include <stdbool.h>

void fileCheck(const char * filename)
{
    FILE *f = fopen(filename, "rb");
    printf("\n");
    while (true)
    {
        int ch;
        int res = fread(&ch, sizeof(int), 1, f);
        if(res == 0)
        {
            break;
        } 
        printf("el = %d\n", ch, res);
    }
    printf("\n");
    fclose(f);
}

void createFile(const char * filename)
{

    int n;
    printf("n = ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        printf("el[%d]  = ", i);
        scanf("%d", &arr[i]);
    }

    FILE *f = fopen(filename, "wb");
    fwrite(&arr, sizeof(int), n, f);
    fclose(f);
}

void fileReaderAndWriter(const char * filename, const char *filename2, const char * filename3)
{
    FILE *f = fopen(filename, "rb");
    FILE *fd = fopen(filename2, "ab");
    FILE *g = fopen(filename3, "ab");

    int countD = 0;
    int countV = 0;

    while(true)// (true)
    {
        int ch;
        int res = fread(&ch, sizeof(int), 1, f);
        if(res == 0)
        {
            break;
        }   
        if(ch > 0)
        { 
            countD++;
            //fwrite(&ch, sizeof(int), 1, fd);
            fwrite(&ch, sizeof(int), 1, fd);
        }
        else if(ch < 0) countV++;
    }
    
    if(countD != countV)
    {
        printf("\nWrong number of numbers\n");
    }
    else
    {
        fclose(fd);
        fd = fopen(filename2, "rb");
        while(true)// (true)
        {
            int ch;
            int res = fread(&ch, sizeof(int), 1, fd);
            if(res == 0)
            {
                break;
            } 

            fwrite(&ch, sizeof(int), 1, g);  
        
        }
        fclose(f);
        f = fopen(filename, "rb");

        while(true)
        {
            int ch;
            int res = fread(&ch, sizeof(int), 1, f);
            if(res == 0)
            {
                break;
            } 
            if(ch < 0)
            {
                fwrite(&ch, sizeof(int), 1, g);
            }
        }
        //fclose(fd);
        //fileCheck(filename2);
        //fd = fopen(filename2, "ab");
        
    }

    fclose(g);
    fclose(f);
    fclose(fd);
}



int main()
{
    createFile("data.dat");
    fileReaderAndWriter("data.dat", "h.dat", "g.dat");
    fileCheck("g.dat");
    //fileReader("data.dat");
}