#include <iostream>
#include <cmath>
using namespace std;

void func()
{
    double x;
    double y;

    cin >> x;
    cin >> y;

    cout.precision(10);

    cout << pow(x, y) << endl;

    cout << scientific << pow(x, y) << endl;
}

int main()
{
    func();   
}