#include <iostream>

using namespace std;

void func()
{
    int n = 2;

    unsigned long long arr1[n];

    unsigned long long summ = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
        summ += arr1[i];
    }
    cout << summ << endl;
}

int main()
{
    func();
}