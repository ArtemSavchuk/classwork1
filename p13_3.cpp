#include <iostream>
#include <string>

using namespace std;

string fucn(string &str)
{
    int d1 = -1;
    int d2 = -1;


    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '.' && d1 == -1)
        {
            d1 = i;
        } 
        else if(d1 != -1 && str[i] == '.')
        {
            d2 = i;
            break;
        }
    }

    string str1; 
    if(d1 == -1)
    {
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] != ' ')
            {
                str1.append(str, i+1, str.length() - i - 1);
                break;
            }
        }
    } 
    else 
    {
        if(d2 == -1)
        {
            str1.append(str, d1, str.length()-d1);
        } 
        else 
        {
            str1.append(str, 0, d1);
            str1.append(str, d2+1, str.length()-d2-1);
        }
    }
    
    str = str1;
    std::cout << str;
    return str1;
}

int main()
{
    string a = "gjkgbkd jfgjfdjgjd     dldldld";
    cout << fucn(a) << "\n" << a;
}