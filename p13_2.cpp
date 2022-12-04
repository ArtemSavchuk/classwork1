#include <iostream>
#include <string>

using namespace std;

string func(string &str)
{
    int dottt1 = -1; 


    int dottt2 = -1;

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '.' && dottt1 == -1)
        {
            dottt1 = i;


        } 
        else if(dottt1 != -1 && str[i] == '.')
        {
            dottt2 = i;


            break;
        }
    }
    string str1; 


    if(dottt1 == -1)
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

        if(dottt2 == -1)
        {


            str1.append(str, dottt1, str.length()-dottt1);
        } 
        else 
        {
            str1.append(str, 0, dottt1);


            str1.append(str, dottt2+1, str.length()-dottt2-1);
        }
    }
    
    str = str1;
    std::cout << str;
    return str1;
}

int main()
{
    string str = "rigrdigl.tlthlhf.ukrdbgukdug";
    string str1 = func(str);
    cout << str1 << "\n";
}