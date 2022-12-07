#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

//typedef struct Student
//{
    
//}Student;

void avarageMark(string s, int &number, double &sum)
{

    //double sum = 0;
    //int number = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != ' ')
        {   
            number++;
            string d1 = "";
            while(i+1 <= s.size() && s[i] != ' ')
            {
                d1 = d1 + s[i];
                i = i + 1;
            }
            //cout << d1 << endl;
            sum = sum + stof(d1);
        }
    }
    //cout <<"general number = " <<  number << endl;
    
}


void fileCreator(string filename, int n)
{
    double sum = 0;
    int number = 0;
    //int n;
    cout << "Number of students = ";
    //cin >> n;

    ofstream file(filename);
    cout << "give your info in format: last name, first name, name of group\n";
    cout << "then in the next line give your marks in format: <mark1> <mark2> <mark3> ...\n";
    for(int i = 0; i < n; i++)
    {
        //string lastName;
        //cout << "lastname is ";
        //cin >> lastName;

        //string firstName;
        //cout << "firstname is ";
        //cin >> firstName;

        //string nameOfGroup;
        //cout << "name of group is ";
        //cin >> nameOfGroup;

        string res1;
        cout << "student[" << i << "]: \n";
        getline(cin, res1);

        string res2;
        cout << "his marks: \n";
        getline(cin, res2);
        avarageMark(res2, number, sum);

        file << res1 + ' ' + res2 + '\n'; 
    }
    file.close();
    double aver = sum / number;
    cout << "average number  = " << aver;
}

int main()
{
    ///*
    string filename;
    cout << "filename = ";
    getline(cin, filename);
    fileCreator(filename, 2);
    //*/
    /*
    string s1;  
    int n;
    cin >> n;
    cout << "1\n";
    getline(cin, s1);

    string s2;
    cout << "2\n";
    getline(cin, s2);
    
    cout << s1 << endl << s2;
    */
    /*
    int number = 0;
    double sum = 0;
    avarageMark("123 23 45  ", number, sum);
    cout << endl << number;
    cout << endl << sum;
    */
    
    return 0;
}