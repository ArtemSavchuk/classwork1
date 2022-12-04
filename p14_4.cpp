#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void func_1(string str)
{
    fstream f;

    f.open(str, ios::in);

    string zm1;
    string t1 = "<td>";
    string t2 = "</td>";

    int cl1 = 0;

    int cl2 = 0;
    while ((!f.eof()))
    {
        getline(f, zm1);


        if (zm1.find(t1) != -1) 
        {
            cl1 += 1;

            if (zm1.find(t2) != -1) 
            {
                cl2 += 1;


            }
        }
        else if (zm1.find(t2) != -1) 
        {
            cl2 += 1;
            if (zm1.find(t1) != -1) 
            {


                cl1 += 1;
            }

        }
        f.close();
        if (cl1 != cl2) 
        {
            cout << "incorrect" << endl;

        }
        else 
        {

            cout << "correct" << endl;
        }
    }
}



int main()
{
    func_1("myfile.txt");
}
