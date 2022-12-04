#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void func(string str)
{
    fstream f;
    f.open(str);
    string str1;

    getline(f, str1);
    f.close();

    int sum = 0;


    int zm1 = 0;

    int zm2 = 0;
    string sub = "";
    for (char chr : str1)
    {
        
        if ((chr != '+') && (chr != '-') && (chr != '='))
        {
            sub += chr;
        }
        else
        {
            if (zm2 == 0)
            {
           
                sum += stoi(sub);
                zm2 = 1;


                if (chr == '-') 
                { 
                    zm1 = -1; 
                }
                if (chr == '+') 
                { 
                    zm1 = 1; 
                }
                sub = "";
            }
            else
            {
                if (zm1 == -1)
                {
                    sum -= stoi(sub);
                }
                if (zm1 == 1)
                {
                    sum += stoi(sub);
                }
                sub = "";
                if (chr == '-') 
                { 
                    zm1 = -1; 
                }
                if (chr == '+') 
                { 
                    zm1 = 1; 
                }
                if (chr == '=') 
                { 
                    zm1 = 0; break; 
                }
            }
        }
        if (chr == '=')
        {
            break;
        }
    }

    cout << sum << endl;

}

int main()
{
    func("myfile.txt");
}