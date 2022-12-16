//20.13
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>


using namespace std;

void mainFunction(string fileName)
{
    fstream f(fileName);
    vector<int> values;

    while(!f.eof())
    {
        int n;
        f >> n;
        values.push_back(n);
    }

    
    int max_val = *(max_element(values.begin(), values.end()));
    int min_val = *(min_element(values.begin(), values.end()));

    vector<int> withoutRepeat;
    for(int i = 0; i < values.size(); i++)
    {
        bool checkRepeat = true;
        if(withoutRepeat.size() == 0 && values[i] != max_val && values[i] != min_val)
        {
            withoutRepeat.push_back(values[i]);
        }
        else if(withoutRepeat.size() != 0)
        {
            for(int j = 0; j < withoutRepeat.size(); j++)
            {
                if(withoutRepeat[j] == values[i] || values[i] == max_val || values[i] == min_val)
                {
                    checkRepeat = false;
                }   
            }
            if(checkRepeat)
            {
                withoutRepeat.push_back(values[i]);
            }
        }
    }
    f.close();
    
    for(int i = 0; i < withoutRepeat.size(); i++)
    {
        cout << withoutRepeat[i] << " ";
    }
}

int main()
{
    string fileName;
    cout << "each word must go on a new line\n";
    cout << "file should be like this:\n";
    cout << "1\n";
    cout << "2\n";
    cout << "3\n";
    cout << "...\n";
    cout << "input file name\n";
    cin >> fileName;
    mainFunction(fileName);
}