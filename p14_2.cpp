#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string func(string list1) 
{
    int st = 0;


    bool capitalize = false;
    string zm1;

    string zm2;


    for (int i = 0; i <= list1.length(); i++) 
    {
        if ((i == list1.length() && list1[list1.length() - 1] != ' ') || list1[i] == ' ') 
        {
            zm1 = list1.substr(st, i - st);
            if (capitalize) 
            {
                zm1[0] = toupper(zm1[0]);
            }
            zm2.append(zm1);
            zm2 += ' ';
            if (zm1 == "die" || zm1 == "der" || zm1 == "das") 
            {
                capitalize = true;
            }
            else 
            {
                capitalize = false;
            }
            st = i + 1;
        }
    }

    if (list1[list1.length() - 1] != ' ') 
    {

    }
    return zm2;
}

void allFunc()
{
    string str1;
    ifstream myfile("myfile1.txt");


    if (myfile.is_open()) 
    {
        getline(myfile, str1);
        std::cout << func(str1);

        myfile.close();
    }
}

int main() 
{
    allFunc();
}