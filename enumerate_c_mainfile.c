// File enumerate.h
// Declaration of enumerate
// Done by Savchuk Artem
// Date 15.12.2022
// Tests for functions


#include "stdio.h"
#include "stdlib.h"
#include "enumerate_c.c"

//In main function there are all other functions. 
//You can test it with console or with file.
//To test with file you need to create data.txt
//and to put info in(every number on a new line).

int main()
{

    printf("what ex do you want to try?\n");
    printf("choices: 1.1, 1.2, 1.3, 1.4, 2.0, 3.0, 4.0, 5.0, 6.0\n");
    double n_ex;
    scanf("%lf", &n_ex);
    int format;
    printf("do you want to use console or file input?\n");
    printf("enter 1 to use console, enter 2 to use file(file must have name data.txt)\n");
    scanf("%d", &format);

    if(n_ex == 1.1)
    {
        //ex 1a)
        
        if(format == 1)
        {
            DayOfWeek d;
            inputDaysOfWeek(&d);
            outputDaysOfWeek(&d);
        }
        else if(format == 2)
        {
            DayOfWeek d;
            inputDaysOfWeekFromFile(&d, "data.txt");
            outputDaysOfWeek(&d);
        }
        //char a = 'fnerof';
    }
    else if(n_ex == 1.2)
    {
        //ex 1b)
        if(format == 1)
        {
            MonthOfYear m;
            inputMonthOfYear(&m);
            outputMonthOfYear(&m);
        }
        else if(format == 2)
        {
            MonthOfYear m;
            inputMonthOfYearFromFile(&m, "data.txt");
            outputMonthOfYear(&m);
        }
    }
    else if(n_ex == 1.3)
    {
        if(format == 1)
        {
            ColorOfSpectr d;
            inputColorOfSpectr(&d);
            outputColorOfSPectr(&d);
        }
        else if(format == 2)
        {
            ColorOfSpectr d;
            inputColorOfSpectrFromFile(&d, "data.txt");
            outputColorOfSPectr(&d);
        }
    }
    else if(n_ex == 1.4)
    {
        if(format == 1)
        {
            ChessFigure m;
            inputChessFigure(&m);
            outputChessFigure(&m);
        }
        else if(format == 2)
        {
            ChessFigure m;
            inputChessFigureFromFile(&m, "data.txt");
            outputChessFigure(&m);
        }
    }
    else if(n_ex == 2.0)
    {
        if(format == 1)
        {
            Card card1;
            inputCard(&card1);

            Card card2;
            inputCard(&card2);

            enum color cur_color;
            printf("a trump card is: ");
            scanf("%d", &cur_color);

            bool b1 = beat(&card1, &card2, cur_color);
            printf("%s", b1 ? "true" : "false");
        }
        else if(format == 2)
        {
            Card card1;
            inputCardFromFile(&card1, "data.txt");

            Card card2;
            inputCardFromFile(&card2, "data.txt");

            bool b1 = beat(&card1, &card2, 0);
            printf("%s", b1 ? "true" : "false");
        }
    }
    else if(n_ex == 3.0)
    {
        if(format == 1)
        {
            Unit_length unit;
            inputUnit_length(&unit);
            length_in_meters(&unit);
        }
        else if(format == 2)
        {
            Unit_length unit;
            inputUnit_length_from_file(&unit, "data.txt");
            length_in_meters(&unit);
        }
    }
    else if(n_ex == 4.0)
    {
        if(format == 1)
        {
            Vidminky v;
            v.cur = inputV();
            //enum vidminok v1;
    
            //v.cur = v1;
            //printf("v.cur = %d\n", v.cur);
            vidminyuvannya(&v);
        }
        else if(format == 2)
        {
            Vidminky v;
            inputV_fromfile(&v, "data.txt");
            vidminyuvannya(&v);
        }
    }
    else if(n_ex == 5.0)
    {
        if(format == 1)
        {
            inputFunc();
        }
        else if(format == 2)
        {
            Litery lit;
            inputFuncFromFile(&lit, "data.txt");
        }
    }
    else if(n_ex == 6.0)
    {
        if(format == 1)
        {
            input_func();
        }
        else if(format == 2)
        {
            input_func_file("data.txt");
        }
    }

}