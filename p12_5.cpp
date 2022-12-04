#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;


void filereader(char *fileName)
{
    char c;

    std::ifstream myFile(fileName,std::ios::ate);


    std::streampos size = myFile.tellg();
    cout.precision(4);


    for(int i=1;i<=size;i++)
    {
        myFile.seekg(-i,std::ios::end);
        myFile.get(c);
        double c2 = sqrt((int) c);
        cout << c2 << "\n";
    }

}


int main()
{
    filereader("myfile.txt");
    return 0;
}