#include <iostream>
using namespace std;

void p16yi()
{
    float x, eps;
    cout << "x = ";
    cin >> x;
    cout << "eps = ";
    cin >> eps;

    float d1 = 1;
    float sum = 1;
    int zn = -1;

    while(d1 >= eps)
    {   
        d1 = d1 * (x*x);
        sum = sum + zn*d1;
        zn = zn * zn;
    }

    cout << sum;
}

int main()
{
    p16yi();
}