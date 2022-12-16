//20.14
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int letters[26] = {0};

    ifstream file("NameT.txt");
    string line;

    while(getline(file, line))
    {
        for (char c : line)
        {
            int num = (int)c;

            if (num >= 97 && num <= 122)
            {
                ++letters[num - 97];
            }
        }
    }

    ofstream out("NameS.txt");

    for (int i = 0; i < 26; ++i)
    {
        if(letters[i] != 0)
        {
            out << (char)(i + 97) << " - " << letters[i] << endl;
        }
    }

    out.close();

    return 0;
}