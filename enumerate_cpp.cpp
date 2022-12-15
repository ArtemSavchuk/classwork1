#include <iostream>
#include "enumerate.h"
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

//using namespace std;

//ex1
//a)

void outputDaysOfWeek(DayOfWeek &cureDay)
{
    
    printf("Current day of week is %d", cureDay.cur);
}

void inputDaysOfWeek(DayOfWeek  &cureDay)
{
    
    scanf("%d", &cureDay.cur);
    
}

void inputDaysOfWeekFromFile(DayOfWeek  &cureDay, string nameFile)
{
    ifstream f(nameFile);
    string line;
    getline(f, line);
    int n1 = stof(line);
    cureDay.cur = DayOfWeek::days(n1);
}

//b)

void outputMonthOfYear(MonthOfYear &cureMonth)
{
    printf("Current month: %d\n", cureMonth.cur);
}

void inputMonthOfYear(MonthOfYear &cureMonth)
{
    
    printf("input current month: ");
    scanf("%d", &cureMonth.cur);
    
}

void inputMonthOfYearFromFile(MonthOfYear &cureMonth, string nameFile)
{
    ifstream f(nameFile);
    string line;
    getline(f, line);
    int n1 = stof(line);
    cureMonth.cur = MonthOfYear::month(n1);
}

//c
void outputColorOfSPectr(ColorOfSpectr &cureColor)
{
    printf("Current color is %d", cureColor.cur);
}

void inputColorOfSpectr(ColorOfSpectr &cureColor)
{
    
    scanf("%d", &cureColor.cur);
    
}
void inputColorOfSpectrFromFile(ColorOfSpectr &cureColor, string nameFile)
{
    ifstream f(nameFile);
    string line;
    getline(f, line);
    int n1 = stof(line);
    cureColor.cur = ColorOfSpectr::colors(n1);
}

//d

void outputChessFigure(ChessFigure &Figure)
{
    printf("Current figure: %d\n", Figure.cur);
}

void inputChessFigure(ChessFigure &Figure)
{
    
    printf("input current figure: ");
    scanf("%d", &Figure.cur);
    
}

void inputChessFigureFromFile(ChessFigure &Figure, string nameFile)
{
    ifstream f(nameFile);
    string line;
    getline(f, line);
    int n1 = stof(line);
    Figure.cur = ChessFigure::figures(n1);
}

//ex2

bool beat(Card &c1, Card &c2, Card &c3)
{
    
    if (c1.cur_color == c3.cur_color && c2.cur_color == c3.cur_color)
    {
        if (c1.cur_rank > c2.cur_rank) return true;
        return false;
    }
    else if (c1.cur_color == c3.cur_color && c2.cur_color != c3.cur_color) return true;
    else if (c1.cur_color !=  c3.cur_color && c2.cur_color == c3.cur_color) return false;
    else if (c1.cur_color != c3.cur_color && c2.cur_color != c3.cur_color && c1.cur_color == c2.cur_color)
    {
        if (c1.cur_rank > c2.cur_rank) return true;
        return false;
    }   

    return true;
}

void inputCard(Card &c1)
{
    //    enum color {peak, clubs, tambourine, hearts} cur_color;
    printf("choose card suit by number:\n");
    printf("peak = 0, clubs = 1, tambourine = 2, hearts = 3\n");
    //enum color cur_color;
    scanf("%d", &c1.cur_color);
    
    //enum rank {Seven,Eight, Nine, Ten, Jack, Queen, King, Ace} cur_rank;
    printf("choose card order by number:\n");
    printf("Seven = 0,Eight = 1, ...\n");
    //enum rank cur_rank;
    scanf("%d", &c1.cur_rank);
    
}

void inputTrumpCard(Card &c3)
{
    printf("choose a trump card by number:\n");
    printf("peak = 0, clubs = 1, tambourine = 2, hearts = 3\n");
    scanf("%d", &c3.cur_color);
    
}

void inputCardFromFile(Card &c1, string nameFile)
{
    ifstream f(nameFile);
    string line;
    getline(f, line);
    int n1 = stof(line);
    c1.cur_color = Card::color(n1);

    getline(f, line);
    n1 = stof(line);
    c1.cur_rank = Card::rank(n1);
}

void inputTrumpCardFromFile(Card &c3, string nameFile)
{
    ifstream f(nameFile);
    string line;
    getline(f, line);
    int n1 = stof(line);
    c3.cur_color = Card::color(n1);
}

void inputAllCardsFromFile(Card &c1, Card &c2, Card &c3, string nameFile)
{
    ifstream f(nameFile);
    string line;
    int n1;

    getline(f, line);
    n1 = stof(line);
    c1.cur_color = Card::color(n1);
    getline(f, line);
    n1 = stof(line);
    c1.cur_rank = Card::rank(n1);

    getline(f, line);
    n1 = stof(line);
    c2.cur_color = Card::color(n1);
    getline(f, line);
    n1 = stof(line);
    c2.cur_rank = Card::rank(n1);

    getline(f, line);
    n1 = stof(line);
    c3.cur_color = Card::color(n1);
}

//ex3

void outputUnit_length(Unit_length &cureUnit)
{

    printf("Current length unit %d", cureUnit.a);
}

void inputUnit_length(Unit_length &cureUnit)
{
    //enum units unit;
    printf("print your dimension by number\n");
    printf("milimeter=0, meter=1, centimeter=2, decimeter=3, kilometer=4\n");
    scanf("%d", &cureUnit.cur);
    
    printf("your number = ");
    scanf("%lf", &cureUnit.a);
}

void inputUnit_length_from_file(Unit_length &cureUnit, string nameFile)
{
    ifstream f(nameFile);
    string line;
    int n1;

    getline(f, line);
    n1 = stof(line);
    cureUnit.cur = Unit_length::units(n1);

    double a1;
    getline(f, line);
    a1 = stof(line);
    cureUnit.a = a1;
    

    f.close();

}

void length_in_meters(Unit_length &cureUnit)
{
    enum class units{milimeter, meter, centimeter, decimeter, kilometer} cur;
    

    if (static_cast<int>(cureUnit.cur) == 0)
        printf("%lf", 0.001 * cureUnit.a);
    if (static_cast<int>(cureUnit.cur) == 1)
        printf("%lf", cureUnit.a);
    if (static_cast<int>(cureUnit.cur) == 2)
        printf("%lf", 0.01 * cureUnit.a);
    if (static_cast<int>(cureUnit.cur) == 3)
        printf("%lf", 0.1 * cureUnit.a);
    if (static_cast<int>(cureUnit.cur) == 4)
        printf("%lf", 1000 * cureUnit.a);
}

//ex4

void vidminyuvannya(Vidminky &curVidminok)
{
    if (static_cast<int>(curVidminok.cur) == 0){
        printf("prohramuvannya , mova, kompyuter");
    }
    if (static_cast<int>(curVidminok.cur) == 1){
        printf("prohramuvannya , movy , kompyutera");
    }
    if (static_cast<int>(curVidminok.cur) == 2){
        printf("prohramuvannyu , movi , kompyuteru");
    }
    if (static_cast<int>(curVidminok.cur) == 3){
        printf("prohramuvannya , movu , kompyuter");
    }
    if (static_cast<int>(curVidminok.cur) == 4){
        printf("prohramuvannyam , movoyu, kompyuterom");
    }
    if (static_cast<int>(curVidminok.cur) == 5){
        printf("prohramuvannyu , movi, kompyuteri");
    }
    if (static_cast<int>(curVidminok.cur) == 0){
        printf("prohramuvannya , movo, kompyutere");
    }

}

void inputV(Vidminky &v)
{
    printf("input vidminok by number\n");
    printf("nazyvnyy=0, rodovyy=1, davalnyy=2, znakhidnyy=3, orudnyy=4, mistsevyy=5, klychnyy=6\n");
    
    scanf("%d", &v.cur);
    
}

void inputVFromFile(Vidminky &v, string nameFile)
{
    ifstream f(nameFile);
    string line;
    int n1;

    getline(f, line);
    n1 = stof(line);

    v.cur = Vidminky::vidminok(n1);
}

//ex5

int perevirka(Litery &curLitera)
{
    if (static_cast<int>(curLitera.cur) == 97 || static_cast<int>(curLitera.cur) == 111 || static_cast<int>(curLitera.cur) == 117 || static_cast<int>(curLitera.cur) == 105 || static_cast<int>(curLitera.cur) == 121 || static_cast<int>(curLitera.cur) == 101)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void inputFunc()
{
    // enum class litera {a=97, o=111, u=117, i=105, y=121, e=101} cur;
    string sent;
    cin >> sent;

    int counter = 0;

    for (int i = 0; i < sent.size(); i++)
    {
        Litery l;
        l.cur = static_cast<Litery::litera>(sent[i]);
        // l.cur = 97;
        counter += perevirka(l);
    }
    printf("kilkist: %d\n", counter);
}

void inputFuncFromFile(string nameFile)
{
    ifstream f(nameFile);
    string sent;
    getline(f, sent);

    int counter = 0;

    for (int i = 0; i < sent.size(); i++)
    {
        Litery l;
        l.cur = static_cast<Litery::litera>(sent[i]);
        // l.cur = 97;
        counter += perevirka(l);
    }
    printf("kilkist: %d\n", counter);
}

//ex6
/*
void find_course(int a, enum orders list[], CourseandOrder * PastCourse, int array[], int vel)
{
    int i;
    int j;
    double x = 0;
    double y = 0;
    int x_n = 0;
    int y_n = 0; 
    for (i = 0; i < a; i ++)
    {
        if (PastCourse -> cureCourse == 0)
        {    
            j = 0;
            
        }
        if (PastCourse -> cureCourse == 2)
        {    
            j = 2;
            
        }
        if (PastCourse -> cureCourse == 1)
        {    
            j = 1;
            
        }
        if (PastCourse -> cureCourse == 3)
        {    
            j = 3;
            
        }
        if (list[i] == 1)
        {    
            j += 2;
            
        }
        if (list[i] == 2)
            j -= 1;
        if (list[i] == 3)
        {
            j += 1;
        }
        if(j < 0)
        {
            j = j + 4;
        }
        if (j % 4 == 0)
        {    
            PastCourse -> cureCourse = CourseandOrder::courses(0);
            y = y + vel*array[i];
        }
        if (j % 4 == 1)
        {    
            PastCourse -> cureCourse = CourseandOrder::courses(1);
            x = x + vel*array[i];
        }
        if (j % 4 == 2)
        {    
            PastCourse -> cureCourse = CourseandOrder::courses(2);
            y = y - vel*array[i];
        }
        if (j % 4 == 3)
        {    
            PastCourse -> cureCourse = CourseandOrder::courses(3);
            x = x - vel*array[i];
        }
    
    }
    printf("Course =  %d\n", PastCourse->cureCourse);
    
    printf("absolute v = %lf", pow((pow(x, 2) + pow(y, 2)), 0.5));
    
}

void input_func()
{
    CourseandOrder c;
    printf("print current course\n");
    printf("N = 0, S = 1, W = 2, E = 3\n");
    scanf("%d", &c);

    int n;
    printf("Forward = 0, Back = 1, Left = 2, Right = 3\n");
    printf("number of elements in array\n");
    scanf("%d", &n);

    int array1[n];
    for(int i = 0; i < n; i++)
    {
        printf("element[%d] = ", i);
        scanf("%d", &array1[i]);
    }

    int array2[n];
    printf("elements of time array:\n");
    for(int i = 0; i < n; i++)
    {
        printf("element[%d] = ", i);
        scanf("%d", &array2[i]);
    }

    int v;
    printf("print velocity = ");
    scanf("%d", &v);

    find_course(n, array1, &c, array2, v);
}

input_func_file(const char * nameFile)
{
    FILE *f = fopen(nameFile, "r");
    char str[50] = "";
    int n1;

    fgets(str, 50, f);
    n1 = atof(str);
    CourseandOrder c;
    c.cureCourse = CourseandOrder::courses(n1);

    int n;
    fgets(str, 50, f);
    n = atof(str);
    
    int array1[n];
    for(int i = 0; i < n; i++)
    {
        fgets(str, 50, f);
        array1[i] = atof(str);
    }

    int array2[n];
    for(int i = 0; i < n; i++)
    {
        fgets(str, 50, f);
        array2[i] = atof(str);
    }

    int v;
    fgets(str, 50, f);
    v = atof(str);

    find_course(n, array1, &c, array2, v);
    fclose(f);
}

*/