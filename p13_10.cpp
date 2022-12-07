#include <iostream>
#include <string.h>

using namespace std;

int numberOfP(string str)
{
    //string str;
    //getline(cin, str);

    int number = 0;
    for(int i = 0; i < str.size(); i++)
    {
        //cout << str[i] << endl;
        if(str[i] == ' ' && i < str.size() - 1)
        {
            //cout << "case1\n";
            //в такому випадку нічого не робимо    
        }
        else if(str[i] != ' ')
        {
            //cout << "case2\n";
            int symb = str.find(' ', i);
            if(symb == -1)
            {
                if(str[i] == str[str.size() - 1]) number++;
                return number;
            }
            else
            {
                if(str[i] == str[symb - 1]) number++;
                i = symb;
            }
        }
    }

    return number;

}

int main()
{
    //string s = "rtrttrtr";
    //int index = s.find('u');
    //cout << index;
    string str;
    getline(cin, str);
    int nnumber = numberOfP(str);

    cout << nnumber;
}




