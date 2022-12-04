#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void func_dop()
{
    int n;
    cout << "n = ";
    cin >> n;

    float *a = (float*)calloc(n, sizeof(float));

    for(int i = 0; i < n; i++)
    {
        cout << "a[" << to_string(i) << "] = ";
        cin >> a[i];
    }
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        cout << to_string(a[i]) << endl;
    }
    float sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    cout << "sum = " << to_string(sum) << endl;
    float disp = sum / n;
    for(int i = 0; i < n; i++)
    {
        cout << "disp["<<to_string(i)<<"] = " << abs(a[i] - disp) << endl;
    }
    free(a);
}

void func_main()
{
    int n;
    cout << "how many times do you want to make a list?" << endl << "n = ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        func_dop();
    }
}

int main()
{
    func_main();
}