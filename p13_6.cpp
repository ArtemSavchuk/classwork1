#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string>* func_vsp(string rech)
{
    int lLimit = 0;

    int minW_length = 100000;


    auto* res = new vector<string>();

    for(int i = 0; i < rech.length(); i++)
    {
        if((rech[i] == ' ' || i == rech.length() - 1))
        {
            string word = rech.substr(lLimit, i - lLimit);
            if(word.length() < minW_length)
            {
                minW_length = word.length();
            }

            lLimit = i + 1;
        }
    }

    lLimit = 0;

    for(int i = 0; i < rech.length(); i++)
    {
        if((rech[i] == ' ' || i == rech.length() - 1))
        {
            string word = rech.substr(lLimit, i - lLimit);
            if(word.length() == minW_length)
            {
                res->push_back(word);
            }

            lLimit = i + 1;
        }
    }

    return res;
}


void func()
{
    string rech = "qweqwe wrwer dsgdfg";

    vector<string>* vector_result = func_vsp(rech);

    cout << "first" << endl;
    cout << vector_result->at(0) << endl;

    cout << "second" << endl;
    cout << vector_result->at(vector_result->size() - 1) << "\n";

    cout << "third" << endl;
    for(int i = 0; i < vector_result->size(); i++)
    {
        cout << vector_result->at(i) << "\n";
    }

    delete[] vector_result;
}

int main()
{
    func();
}