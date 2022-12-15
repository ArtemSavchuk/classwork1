// File enumerate.h
// Declaration of enumerate
// Done by Savchuk Artem
// Date 15.12.2022
// Headers for enumerate

#include "stdbool.h"


//first ex
//a
typedef struct DayOfWeek
{
    enum days {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday} cur;
    //enum days cur;
}DayOfWeek;

//@result - void 
void outputDaysOfWeek(DayOfWeek * curDay);

//@result - void
void inputDaysOfWeek(DayOfWeek * cur);

//@result - void
void inputDaysOfWeekFromFile(DayOfWeek * cureDay, const char * nameFile);

//b
typedef struct MonthOfYear
{
    enum month {January, February, March, April, May, June, Julay, August, September, October, November, December} cur;
    //enum month cur;
}MonthOfYear;

//@result - void
void outputMonthOfYear(MonthOfYear * curMonth);

//@result - void
void inputMonthOfYear(MonthOfYear * curMonth);

//@result - void
void inputMonthOfYearFromFile(MonthOfYear * cureMonth, const char * nameFile);

//c
typedef struct ColorOfSpectr
{
    enum colors {Red, Orange, Yellow, Green, Light_Blue, Blue,Violet, Purple} cur;
    //enum color cur;
}ColorOfSpectr;

//@result - void
void outputColorOfSPectr(ColorOfSpectr * curColor);

//@result - void
void inputColorOfSpectr(ColorOfSpectr * curColor);

//@result - void
void inputColorOfSpectrFromFile(ColorOfSpectr * cureColor, const char * nameFile);

//d

typedef struct ChessFigure
{
    enum figures {pawn, knight, bishop, rook, queen, king} cur;
}ChessFigure;

//@result - void
void outputChessFigure(ChessFigure * Figure);

//@result - void
void inputChessFigure(ChessFigure * Figure);

//@result - void
void inputChessFigureFromFile(ChessFigure * Figure, const char * nameFile);


//second ex

typedef struct Card
{
    enum color {peak, clubs, tambourine, hearts} cur_color;
    enum rank {Seven,Eight, Nine, Ten, Jack, Queen, King, Ace} cur_rank;

}Card;

//@result bool: true - in the case of the first card beats the second
//              -false - in the case of the first card doesn't beat the second
bool beat(Card * c1, Card * c2, enum color c1_m);

//@result - void
void inputCard(Card * c1);

//@result - void
void inputCardFromFile(Card * c1, const char * nameFile);

//third ex

typedef struct Unit_length
{
    enum units{milimeter, meter, centimeter, decimeter, kilometer} cur;
    double a;
} Unit_length;

//@result - void
void outputUnit_length(Unit_length * cureUnit);

//@result - void
void inputUnit_length(Unit_length * cureUnit);

//@result - void
void inputUnit_length_from_file(Unit_length * cureUnit, const char * nameFile);

//@result - void
void length_in_meters(Unit_length * cureUnit);

//fourth ex

typedef struct Vidminky
{
    enum vidminok {nazyvnyy, rodovyy, davalnyy, znakhidnyy, orudnyy, mistsevyy, klychnyy} cur;
    //enum words {prohramuvannya, mova, kompyuter} wrd; 
}Vidminky;

//@result - void
void vidminyuvannya(Vidminky * curVidminok);

//@result - void
void inputV_fromfile(Vidminky * v, const char * nameFile);

//@result - enum vidminok
enum vidminok inputV();

//fifth

typedef struct Litery
{
    enum litera {a=97, o=111, u=117, i=105, y=121, e=101} cur;
    
}Litery;

//@result - void
void inputFuncFromFile(Litery * lit, const char * nameFile);

//@result - void
void inputFunc();

//@result - int: the number of vowels
int perevirka(Litery * curLitera);

//sixth

typedef struct CourseandOrder
{
    enum courses{N, S, W, E} cureCourse;
    enum orders{Forward, Back, Left, Right} cureOrder;
} CourseandOrder;

//@result - void
void find_course(int a, enum orders list[], CourseandOrder * PastCourse, int array[], int vel);

//@result - void
void input_func();

//@result - void
void input_func_file(const char * nameFile);







