#include "Ratio.h"

Ratio hregory(double eps)
{
    Ratio r;
    r.setNom(1);
    int i = 1;
    while(i*i*eps < 1)
    {

    }
}

int main()
{
    Ratio a1(1,2),a2,a3;
    std::cin >> a2;
    a3 = a1 + a2;
    a3.reduce();
}