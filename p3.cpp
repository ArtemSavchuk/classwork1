#include <iostream>
#include <math.h>
using namespace std;

void p22()
{
    float a0, b0, t0, p0, eps;
    a0 = 1;
    b0 = 1 / sqrt(2);
    t0 = 1/4;
    p0 = 1;
    cout << "eps = ";
    cin >> eps;

    float ak, bk, tk, pk;

    float d1 = (a0 + b0) * (a0 + b0) / (4 * t0);
    float sum = 0;

    for(int i = 0; i < 3; i++)
    {   
        sum = sum + d1;
        ak = (a0 + b0) / 2;
        float dp = a0*b0;
        bk = sqrt(dp);
        tk = t0 - p0*(a0 - ak)*(a0 - ak);
        pk = 2 * p0;

        d1 = (ak + bk) * (ak + bk) / (4 * tk);

        a0 = ak;
        b0 = bk;
        t0 = tk;
        p0 = pk;
        cout << a0 << " " << b0 << " " << t0 << " " << p0 << " " << d1 << endl;
    }

    cout << sum;

}

int main()
{
    p22();
}