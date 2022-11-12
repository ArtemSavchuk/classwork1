#include <iostream>
#include <string>
using namespace std;

#define N 1 

void p22()
{
    int a[2*N + 1][2*N + 1];
    for(int i = 0; i < 2*N + 1; i++)
    {
        for(int j = 0; j < 2*N + 1; j++)
        {
            cout << "a["<<to_string(i)<< "][" <<to_string(j)<<"] = ";
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 2*N + 1; i++)
    {
        for(int j = 0; j < 2*N + 1; j++)
        {
            cout << to_string(a[i][j]) << " ";
        }
        cout << endl;
    }
}

int main()
{
    p22();
}
