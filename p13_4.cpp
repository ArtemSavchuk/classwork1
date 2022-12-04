#include <iostream>
#include <string>

using namespace std;

void posh(string str, int n, char rozd)
{
    int st = 0;



    for(int i = 0, j = 0; i < n, j < str.length(); j++)
    {


        if(str[j] == rozd)
        {
            string a;
            a.append(str, st, j-st);
            st = j+1;
            i++;
            cout << stof(a) << "\n";
        }
    }
}

int main(){
    string str = "823824.42,35853489.4535,54784,486454,";

    
    posh(str, 4, ',');
}