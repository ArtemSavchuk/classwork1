// File enumerate.h
// Declaration of enumerate
// Done by Savchuk Artem
// Date 15.12.2022
// Headers for enumerate

//#include <string>
//ex1
using namespace std;

//a)
typedef struct DayOfWeek
{
    enum class days {Monday, Tuesday, Wednesday} cur;
    //enum days cur;
} DayOfWeek;
//@result - void 
void outputDaysOfWeek(DayOfWeek &cureDay);
//@result - void 
void inputDaysOfWeek(DayOfWeek &cureDay);
//@result - void 
void inputDaysOfWeekFromFile(DayOfWeek  &cureDay, string nameFile);

//b)

typedef struct MonthOfYear
{
    enum class month {January, February, March, April, May, June, Julay, August, September, October, November, December} cur; 
}MonthOfYear;
//@result - void 
void outputMonthOfYear(MonthOfYear &cureMonth);
//@result - void 
void inputMonthOfYear(MonthOfYear &cureMonth);
//@result - void 
void inputMonthOfYearFromFile(MonthOfYear &cureMonth, string nameFile);

//c)
typedef struct ColorOfSpectr
{
    enum class colors {Red, Orange, Yellow, Green, Light_Blue, Blue,Violet, Purple} cur;

} ColorOfSpectr;
//@result - void 
void outputColorOfSPectr(ColorOfSpectr &cureColor);
//@result - void 
void inputColorOfSpectr(ColorOfSpectr &cureColor);
//@result - void 
void inputColorOfSpectrFromFile(ColorOfSpectr &cureColor, string nameFile);

//d)

typedef struct ChessFigure
{
    enum class figures {pawn, knight, bishop, rook, queen, king} cur;
}ChessFigure;

//@result - void 
void outputChessFigure(ChessFigure &Figure);
//@result - void 
void inputChessFigure(ChessFigure &Figure);
//@result - void 
void inputChessFigureFromFile(ChessFigure &Figure, string nameFile);

//ex2

typedef struct Card
{
    enum class color {peak, clubs, tambourine, hearts} cur_color;
    enum class rank {Seven,Eight, Nine, Ten, Jack, Queen, King, Ace} cur_rank;

}Card;
//@result bool: true - in the case of the first card beats the second
//              -false - in the case of the first card doesn't beat the second
bool beat(Card &c1, Card &c2, Card &c3);
//@result - void 
void inputCard(Card &c1);
//@result - void 
void inputTrumpCard(Card &c3);
//@result - void 
void inputCardFromFile(Card &c1, string nameFile);
//@result - void 
void inputTrumpCardFromFile(Card &c3, string nameFile);
//@result - void 
void inputAllCardsFromFile(Card &c1, Card &c2, Card &c3, string nameFile);

//ex3

typedef struct Unit_length
{
    enum class units{milimeter, meter, centimeter, decimeter, kilometer} cur;
    double a;
} Unit_length;
//@result - void
void outputUnit_length(Unit_length &cureUnit);
//@result - void
void inputUnit_length(Unit_length &cureUnit);
//@result - void
void length_in_meters(Unit_length &cureUnit);
//@result - void
void inputUnit_length_from_file(Unit_length &cureUnit, string nameFile);

//ex4

typedef struct Vidminky
{
    enum class vidminok {nazyvnyy, rodovyy, davalnyy, znakhidnyy, orudnyy, mistsevyy, klychnyy} cur;
    //enum words {prohramuvannya, mova, kompyuter} wrd; 
}Vidminky;
//@result - void
void vidminyuvannya(Vidminky &curVidminok);
//@result - void
void inputV(Vidminky &v);
//@result - void
void inputVFromFile(Vidminky &v, string nameFile);

//ex5

typedef struct Litery
{
    enum class litera
    {
        a = 97,
        o = 111,
        u = 117,
        i = 105,
        y = 121,
        e = 101
    } cur;

} Litery;

//@result - int: the number of vowels
int perevirka(Litery &curLitera);
//@result - void
void inputFunc();
//@result - void
void inputFuncFromFile(string nameFile);

//ex 6

typedef struct CourseandOrder
{
    enum courses{N, S, W, E} cureCourse;
    enum orders{Forward, Back, Left, Right} cureOrder;
} CourseandOrder;
/*
//@result - void
void find_course(int a, enum orders list[], CourseandOrder * PastCourse, int array[], int vel);

//@result - void
void input_func();

//@result - void
void input_func_file(const char * nameFile);

*/