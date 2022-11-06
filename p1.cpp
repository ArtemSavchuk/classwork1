#include <iostream>
using namespace std;
#define N 10 // т.я масив має бути статичним, приймемо N за 10.

void p9v()
{
    float a[N];
    //float a;
    for(int i = 0; i < N; i++)
    {
        cout << "elem = ";
        cin >> a[i];
    }

    //cout << a[0];
    float cnt = a[1];
    for(int i = 1; i < N; i = i + 2)
    {
        if (a[i] > cnt) cnt = a[i];
    }

    cout << cnt;
}

int main()
{
    p9v();
}