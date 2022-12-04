#include <iostream>
#include <cmath>
using namespace std;

void func()
{
    int n;
    cin >> n;

    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;


    for(int i = 1; i <= n; i++)
    {
        cout << "  " << i << "  ";
    }


    cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;


    for(int i = 1; i <= n; i++)
    {
        if(sqrt(i) == round(sqrt(i)))
        {
            cout.precision(0);
            cout << "  " << sqrt(i) << "  ";
        } 
        else
        {
            cout.precision(3);
            cout << sqrt(i) << " ";


        }
        
    }
}

int main()
{
    func();   
}