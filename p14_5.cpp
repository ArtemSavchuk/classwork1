#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

void createFile(int n) 
{
    ofstream file("example.txt");

    for (int i = 0; i < n; i++) 
    {
        string str;

        cout << "info: ";
        cin >> str;

        file << str << "\n";
    }


    file.close();
}

void func_findWrstd(string filename) 
{
    ifstream file(filename);


    string zm1; 
    string minSr;

    float wrscr = 1000;
    while (getline(file, zm1)) 
    {
        int st = 0;
        int zm_count = 0;

        float zm_score = 0;
        string c, temp_surname;
        for (int j = 0; j <= zm1.length(); j++) 
        {
            if (zm1[j] == ',' || j == zm1.length()) 
            {
                c = zm1.substr(st, j - st);
                st = j + 1;


                zm_count++;
                if (zm_count == 1) 
                {
                    temp_surname = c;
                }
                if (zm_count > 3) 
                {
                    zm_score += stoi(c);
                }
            }
        }
        
        zm_score /= zm_count - 3;


        if (zm_score < wrscr) 
        {
            wrscr = zm_score;
            minSr = temp_surname;
        }
    }
    cout << minSr << " " << wrscr;

    file.close();
}

void allFunc()
{
    createFile(4);

    func_findWrstd("test.txt");
}

int main() 
{
    allFunc();
    
}