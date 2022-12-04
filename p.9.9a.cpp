#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void func()
{
    int n,m;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;

    float **a = (float**)calloc(n, sizeof(float));
    for(int i = 0; i < n; i++)
    {
        a[i] = (float*) calloc(m, sizeof(float));
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << "a["<<to_string(i)<<"] = ";
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    //
    int k;
    cout << endl << "k must fit the equation k = 0 (mod m)" << endl << "k = ";
    cin >> k;
    if(k % m == 0)
    {
        float *b1 = (float*)calloc(m, sizeof(float));
        for(int i = 0; i < m; i++)
        {
            cout << "b1["<<to_string(i)<<"] = ";
            cin >> b1[i];
        }

        float **b = (float**)calloc(n+1, sizeof(float));
        for(int i = 0; i < n+1; i++)
        {
            b[i] = (float*) calloc(m, sizeof(float));
        }

        int n1 = k / m;
        for(int i = 0; i < n1; i++)
        {
            for(int j = 0; j < m; j++)
            {
                b[i][j] = a[i][j];
            }
        }

        b[n1] = b1;
        //b[2][0] = 7;

        for(int i = n1; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                b[i+1][j] = a[i][j];
            }
        }
        
        for(int i = 0; i < n+1; i++)
        {
            for(int j = 0; j < m; j++)
            {
               cout << b[i][j] << " ";
            }
            cout << endl;
        }
        
        for(int i = 0; i < n; i++)
        {
            free(a[i]);
        }
        free(a);
        
        
       free(b1);
       for(int i = 0; i < n+1; i++)
        {
            free(b[i]);
        }
        free(b);
    }

    
    
}

int main()
{
    func();
}