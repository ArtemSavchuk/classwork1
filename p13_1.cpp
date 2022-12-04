#include <iostream>
#include <string>

using namespace std;



string strip(string &a)
{
    int a1 = -1;


    int ccc = -1;


    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] == ':' && a1 == -1)
        {
            a1 = i;
        } 
        if(a1 != -1 && a[i] == ',')
        {
            ccc = i;
            break;
        }
    }
    if(a1 == -1)
    {
        return a;
    } 
    else 
    {
        string an; 
        if(ccc == -1)
        {
            an.append(a, a1+1, an.length()-a1-1);
        } 
        else 
        {
            an.append(a, a1+1, ccc-a1-1);
        }
        
        a = an;
        return an;
    }
    
}

int main()
{
    string mystr = "vdivf:riidg:bfkdfbfb";
    string ex =  strip(mystr);

    cout << ex << "\n" << mystr;
}