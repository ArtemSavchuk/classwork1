#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

#define N 7 

void p11()
{
    int a[N][N] = {0};
    /*
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << to_string(a[i][j]) << " ";
        }
        cout << endl;
    }*/
    int i = N-1, j = N-1;
    cout << i << " " << j << endl;
    int step = 1;
    int numb = N*N;
    int phase = 0;
    int k = 0;
    while(numb >= 1)
    {
        
        while(j >= 0 && a[i][j] == 0)
        {
            a[i][j] = numb;
            j = j - 1;
            numb = numb - 1;
            //cout << j << " " << numb;
        }
        cout << endl;
        j++;
        i--;
        while(i >= 0 && a[i][j] == 0)
        {
            a[i][j] = numb;
            i--;
            numb--;
        }
        j++;
        i++;
        while(j <= N && a[i][j] == 0)
        {
            a[i][j] = numb;
            j++;
            numb--;
        }
        j--;
        i++;
        while(i <= N && a[i][j] == 0)
        {
            a[i][j] = numb;
            i++;
            numb--;
        }
        i--;
        j--;
        k++;
    }
    cout << endl;
    cout << to_string(i) << " " << to_string(j) << endl;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(a[i][j] < 10) cout << to_string(a[i][j]) << "--"; 
            cout << to_string(a[i][j]) << "-";
        }
        cout << endl;
    }
    
    
}

void p11_1()
{
    string a[N][N];
    /*
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    */
    int pos_1 = (N+1)/2 - 1;
    int pos_2 = (N+1)/2 - 1;
    cout << to_string(pos_1) << " " << to_string(pos_2) << endl;
    int previous = 1;
    a[pos_1][pos_2] = to_string(1);
    int number = 2;

    int counter = 0;
    while (number < 49)
    {
        //cout << to_string(pos_1) << " " << to_string(pos_2) << endl;
        if(pos_2 + 1 <= N ) 
        {
            
            a[pos_1][pos_2+1] = to_string(number);
            //cout << to_string(pos_1) << " " << to_string(pos_2) << endl << endl;
            pos_2 = pos_2 + 1;
            //cout << to_string(pos_1) << " " << to_string(pos_2) << endl;
            number++;
        }

        for(int i = 0; i < previous; i++)
        {
            
            a[pos_1 - 1][pos_2] = to_string(number);
            pos_1 = pos_1 - 1;
            //cout << to_string(pos_1) << " " << to_string(pos_2) << endl;
            number++;
        }

        for(int i = 0; i < previous + 1; i++)
        {
            
            a[pos_1][pos_2 - 1] = to_string(number);
            number++;
            pos_2 = pos_2 - 1;
            //cout << to_string(pos_1) << " " << to_string(pos_2) << endl;
        }
        for(int i = 0; i < previous + 1; i++)
        {
            
            a[pos_1+1][pos_2] = to_string(number);
            number++;
            pos_1 = pos_1+1;
            //cout << to_string(pos_1) << " " << to_string(pos_2) << endl;
        }
        for(int i = 0; i < previous + 1; i++)
        {
            
            a[pos_1][pos_2+1] = to_string(number);
            number++;
            pos_2 = pos_2 + 1;
            //cout << to_string(pos_1) << " " << to_string(pos_2) << endl;
        }
        /*
        for(int i = 0; i < N+N-1; i++)
        {
            for(int j = 0; j < N+N-1; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        */
        previous = previous + 2;
    }
    cout << a[2][0] << endl;
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            string p1 = a[i][j];
            //cout << endl << "p1 = " <<  p1;
            //int p2 = stoi(p1);
            if(p1.length() < 2) cout << "  " << a[i][j];
            else cout << " " << a[i][j];
            //cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    counter++;
    
}

int main()
{
    int k = stoi("2029");
    cout << to_string(k);
    //p11();
    p11_1();
}
