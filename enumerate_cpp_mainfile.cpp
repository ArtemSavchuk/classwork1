// File enumerate.h
// Declaration of enumerate
// Done by Savchuk Artem
// Date 15.12.2022
// Tests for functions


#include <iostream>
#include "enumerate_cpp.cpp"
#include <string>
using namespace std;

//In main function there are all other functions. 
//You can test it with console or with file.
//To test with file you need to create data.txt
//and to put info in(every number on a new line).

int main()
{
    string s;
    double n_ex;
    cout << "what ex do you want to try?\n";
    cout << "choices: 1.1, 1.2, 1.3, 1.4, 2.0, 3.0, 4.0, 5.0\n";
    cin >> n_ex;
    cout << "if you want use console, print 1, if you want use file input, print 2\n";
    int format;
    cin >> format;

    if(n_ex == 1.1)
    {
        if(format == 1)
        {
            DayOfWeek d;
            inputDaysOfWeek(d);
            outputDaysOfWeek(d);
        }
        else if(format == 2)
        {
            DayOfWeek d;
            inputDaysOfWeekFromFile(d, "data.txt");
            outputDaysOfWeek(d);
        }
    }
    else if(n_ex == 1.2)
    {
        if(format == 1)
        {
            MonthOfYear m;
            inputMonthOfYear(m);
            outputMonthOfYear(m);
        }
        else if(format == 2)
        {
            MonthOfYear m;
            inputMonthOfYearFromFile(m, "data.txt");
            outputMonthOfYear(m);
        }
    }
    else if(n_ex == 1.3)
    {
        if(format == 1)
        {
            ColorOfSpectr d;
            inputColorOfSpectr(d);
            outputColorOfSPectr(d);
        }
        else if(format == 2)
        {
            ColorOfSpectr d;
            inputColorOfSpectrFromFile(d, "data.txt");
            outputColorOfSPectr(d);
        }
    }
    else if(n_ex == 1.4)
    {
        if(format == 1)
        {
            ChessFigure m;
            inputChessFigure(m);
            outputChessFigure(m);
        }
        else if(format == 2)
        {
            ChessFigure m;
            inputChessFigureFromFile(m, "data.txt");
            outputChessFigure(m);
        }
    }
    else if(n_ex == 2)
    {
        if(format == 1)
        {
            Card card1;
            inputCard(card1);

            Card card2;
            inputCard(card2);

            Card card3;
            inputTrumpCard(card3);

            bool b1 = beat(card1, card2, card3);
            printf("%s", b1 ? "true" : "false");
        }
        else if(format == 2)
        {
            Card card1;

            Card card2;

            Card card3;
        
            inputAllCardsFromFile(card1, card2, card3, "data.txt");

            bool b1 = beat(card1, card2, card3);
            printf("%s", b1 ? "true" : "false");
        }
    }
    else if(n_ex == 3)
    {
        if(format == 1)
        {
            Unit_length unit;
            inputUnit_length(unit);
            length_in_meters(unit);
        }
        else if(format == 2)
        {
            Unit_length unit;
            inputUnit_length_from_file(unit, "data.txt");
            length_in_meters(unit);
        }
    }
    else if(n_ex == 4)
    {
        if(format == 1)
        {
            Vidminky v;
            inputV(v);
            vidminyuvannya(v);
        }
        else if(format == 2)
        {
            Vidminky v;
            inputVFromFile(v, "data.txt");
            vidminyuvannya(v);   
        }
    }
    else if(n_ex == 5)
    {
        if(format == 1)
        {
            inputFunc();
        }
        else if(format == 2)
        {
            inputFuncFromFile("data.txt");
        }
    }
    else if(n_ex == 6)
    {
        if(format == 1)
        {
            //input_func();
        }
    }
}