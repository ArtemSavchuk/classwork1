#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

void task13_1()
{
    string sentence = "abc:def,rf";
    string result = sentence;
    char flag1 = ':';
    char flag2 = ',';
    bool isflag1 = false;
    int inner;

    for (int i = 0; i < sentence.length(); i++)
    {
        if(sentence[i] == flag1)
        {
            isflag1 = true;
            inner = i + 1;
            result = sentence.substr(inner);
        }

        if(isflag1 && sentence[i] == flag2)
        {
            result = sentence.substr(inner, i - inner);
            break;
        }
    }

    cout << result;
}


void task13_2()
{
    string sentence = "abc:def,rf";
    string result = sentence;
    char flag1 = '.';
    bool isflag1 = false;
    int inner;

    result.erase(remove(sentence.begin(),sentence.end(),' '),sentence.end());

    for (int i = 0; i < sentence.length(); i++)
    {
        if(sentence[i] == flag1)
        {
            isflag1 = true;
            inner = i + 1;

            result = result.substr(0, inner) + sentence.substr(inner, sentence.length() - inner);
        }

        if(isflag1 && sentence[i] == flag1)
        {
            result = sentence.substr(inner, i - inner);
            break;
        }
    }

    cout << result;

}


void task13_3()
{
    string sentence = "This is my  sentence";
    string result;
    bool flag = false;

    for(int i = 0; i < sentence.length(); i++)
    {
        if(sentence[i] != ' ' && sentence[i+1] == ' ')
        {
            flag = true;
        }

        if (!flag)
        {
            result.append(&sentence[i], 1);
        } else
        {
            flag = false;
            continue;
        }

    }

    cout << result;
}

bool is_number(const string& s)
{
    char* end;
    double val = strtod(s.c_str(), &end);
    return end != s.c_str();
}

double* funcForTask13_4(string sentence, int n, char separator)
{
    auto* mas = new double[n];
    int flag = 0;
    int counter = 0;
    int lim = 0;

    for(int i = 0; i < sentence.length(); i++)
    {
        if((sentence[i] == separator || i == sentence.length() - 1) && flag < n)
        {
            if(is_number(sentence.substr(lim, i)))
            {
                mas[counter] = stod(sentence.substr(lim, i));
                counter++;
                flag++;
            }

            lim = i + 1;
        }
    }

    return mas;
}

void task13_4()
{
    int n;
    cout << "n = ";
    cin >> n;

    string sentence = "12.1 e 56";
    char separator = ' ';

    double* res = funcForTask13_4(sentence, n, separator);

    for(int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }

    delete[](res);
}


string* funcForTask13_5(string sentence, int n, char separator)
{
    auto* res = new string[n];
    int flag = 0;
    int counter = 0;
    int lim = 0;

    for(int i = 0; i < sentence.length(); i++)
    {
        if(flag >= n)
        {
            break;
        }

        if((sentence[i] == separator || i == sentence.length() - 1))
        {
            res[counter] = sentence.substr(lim, i - lim);
            counter++;
            flag++;
            lim = i + 1;
        }
    }

    return res;
};

void task13_5()
{
    int n;
    cout << "n = ";
    cin >> n;

    string sentence = "There are many words";
    char separator = ' ';

    string* res = funcForTask13_5(sentence, n, separator);

    for(int i = 0; i < n; i++)
    {
        cout << res[i] << "\n";
    }

    delete[] (res);
}

vector<string>* funcForTask13_6(string sentence)
{
    int lowerLim = 0;
    int lengthOfMinWord = 100000;
    auto* res = new vector<string>();

    for(int i = 0; i < sentence.length(); i++)
    {
        if((sentence[i] == ' ' || i == sentence.length() - 1))
        {
            string word = sentence.substr(lowerLim, i - lowerLim);
            if(word.length() < lengthOfMinWord)
            {
                lengthOfMinWord = word.length();
            }

            lowerLim = i + 1;
        }
    }

    lowerLim = 0;

    for(int i = 0; i < sentence.length(); i++)
    {
        if((sentence[i] == ' ' || i == sentence.length() - 1))
        {
            string word = sentence.substr(lowerLim, i - lowerLim);
            if(word.length() == lengthOfMinWord)
            {
                res->push_back(word);
            }

            lowerLim = i + 1;
        }
    }

    return res;
}

void task13_6()
{
    string sentence = "There is my sentence";

    vector<string>* res = funcForTask13_6(sentence);

    cout << "a) \n";
    cout << res->at(0) << "\n";

    cout << "b) \n";
    cout << res->at(res->size() - 1) << "\n";

    cout << "c) \n";
    for(int i = 0; i < res->size(); i++)
    {
        cout << res->at(i) << "\n";
    }

    delete[] res;
}

int main()
{
    //task13_1();
    //task13_2();
    //task13_3();
    //task13_4();
    //task13_5();
    //task13_6();

    return 0;
}
