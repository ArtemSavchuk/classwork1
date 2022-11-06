#include <iostream>
using namespace std;

void p12b()
{
    float u, v;
    int n;
    cout << "u = ";
    cin >> u;
    cout << "v = ";
    cin >> v;
    cout << "n = ";
    cin >> n;

    float a1, b1;
    a1 = u;
    b1 = v;

    float a11, a2, b2;
    a11 = u;
    int factor = 1;
    float sum = 0;
    //sum = sum + 
    for(int i = 1; i < n+1; i++)
    {
        factor = factor * (i + 1);
        sum = sum + a1*b1/factor;

        a2 = 2*b1 + a1;
        b2 = 2*a11*a11 + b1;

        a1 = a2;
        b1 = b2;

    }
    cout << sum;
}

int main(void)
{
    p12b();
}