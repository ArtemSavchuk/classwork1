#include <iostream>
#include <cmath>
using namespace std;
#define N 10 // т.я масив має бути статичним, приймемо N за 10.

void p10g()
{
    int a[N];
    //float a;
    for(int i = 0; i < N; i++)
    {
        cout << "elem = ";
        cin >> a[i];
    }

    int cnt = 0;
    for(int i = 0; i < N; i++)
    {
        int k = floor(sqrt(i+1)) * floor(sqrt(i+1));
        if(a[k] % 2 == 0) cnt++;
        //cout << k << endl;
    }
    cout << cnt << endl;
    //cout << floor(sqrt(10));
}

int main()
{
    p10g();
}