#include <iostream>
#include <fstream>
#include <string.h>
#include <math.h>

using namespace std;

void fileReader(string fileName, const char * fileData)
{
    ifstream file(fileName);

    double * number = new double[1];
    //number[0] = 1.0;
    //number = (double*)realloc(number, 2);
    //number[1] = 2.0;
    //cout << number[0] << " " << number[1];
    //double tmp;

    //file >> tmp;
    //printf("%lf ", tmp);
    //file.seekg(sizeof(";"));
    //file >> tmp;
    //printf("%lf ", tmp);
    int count = 0;
    while(!file.eof())
    {
        char * t1 = (char*)malloc(256);
        file.getline(t1, 256, ';');
        if(t1[0] == NULL) break;
        //printf("size = %d\n", sizeof(t1));
        //printf("%s\n", t1);
        count++;
        double kk;
        kk = atof(t1);
        number = (double*)realloc(number, count);
        number[count-1] = kk;
       //printf("%lf\n", kk);
       free(t1);
    }

    double * arcsinNumbers = new double[1];
    int count1 = 0;
    for(int i = 0; i < count; i++)
    {
        if(number[i] >= -1.0 && number[i] <= 1.0)
        {
            count1++;
            arcsinNumbers = (double*)realloc(arcsinNumbers, count1);
            arcsinNumbers[count1-1] = asin(number[i]);
        }
    }
    for(int i = 0; i < count; i++)
    {
        printf("%lf ", number[i]);
    }
    printf("\n");

    for(int i = 0; i < count1; i++)
    {
        printf("%lf ", arcsinNumbers[i]);
    }

    FILE * fData = fopen(fileData, "w");
    for(int i = 0; i < count1; i++)
    {
        fprintf(fData, "%e", arcsinNumbers[i]);
        fprintf(fData, ";");
    }

    //double * arr = new double[1];
    //for()
    
    delete[] arcsinNumbers;
    delete[] number;
    fclose(fData);
    file.close();
}

int main()
{
    fileReader("file.txt", "fData.txt");
    //ifstream file("file.txt");
    //string tt;
    //file >> tt;
    //cout << tt << endl;
    //char * t1; //= (char*)malloc(256);
    //file.getline(t1, 20, ';');
    //printf("%s", t1);
    //double k = atof(t1);
    //printf("\n%lf", k);
    //free(t1);
    
}