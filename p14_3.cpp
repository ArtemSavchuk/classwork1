#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

vector <string> func_dop1(string str)
{
    vector <int> vec1;

    for (int d = 0; d < str.length(); d++)
    {
        if ((str[d] == ' ') || (str[d] == ',') || (str[d] == '.') || (str[d] == '!') || (str[d] == '?'))
        {


            vec1.push_back(d);
        }
    }

    vector <string> vec2;

    if (vec1[0] != 0)
    {
        string ttemp = "";

        for (int j = 0; j < vec1[0]; j++)
        {


            ttemp += str[j];
        }


        vec2.push_back(ttemp);
    }

    for (int i = 1; i < vec1.size(); i++)
    {
        if ((vec1[i] - vec1[i - 1]) > 1)
        {
            string ttemp = "";

            for (int j = vec1[i - 1] + 1; j < vec1[i]; j++)
            {
                ttemp += str[j];


            }

            vec2.push_back(ttemp);
        }
    }

    if (vec1[vec1.size() - 1] != (str.length() - 1))
    {
        string ttemp = "";

        for (int j = vec1[vec1.size() - 1] + 1; j < str.length(); j++)
        {
            ttemp += str[j];


        }
        vec2.push_back(ttemp);

    }
    return vec2;
}


void funcdop2(string n1, string n2)
{
    fstream f;

    f.open(n1, ios::in);

    vector <string> a;
    string temp;

    while (!f.eof())
    {
        getline(f, temp);
        a.push_back(temp);
    }

    f.close();

    vector <string> newvv;
    for (string h : a)
    {
        vector <string> words = func_dop1(h);


        for (int j = 0; j < words.size(); j++)
        {
            string temp = "";
            for (int v = (words[j]).length() - 1; v >= 0; v--)
            {


                temp += (words[j])[v];
            }
            words[j] = temp;
        }


        string jk = "";



        for (int k = 0; k < words.size(); k++)
        {
            if (k == (words.size() - 1))
            {
                jk += words[k];
            }
            else
            {
                jk += words[k];
                jk += " ";
            }
        }


        newvv.push_back(jk);
    }


    f.open(n2, ios::out);

    for (string tmppp : newvv)
    {


        f << tmppp << endl;
    }

    f.close();

}



int main()
{
    funcdop2("f1.txt", "f2.txt");
}
