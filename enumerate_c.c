// File enumerate_c.c
// Realization of enumerate
// Done by Savchuk Artem
// Date 15.12.2022
// Realization of functions


#include "stdio.h"
#include "enumerate.h"

//ex1

//a)
void outputDaysOfWeek(DayOfWeek * cureDay)
{
    printf("Current day of week is %d", *cureDay);
}

void inputDaysOfWeek(DayOfWeek * cureDay)
{
    enum days n;
    scanf("%d", &n);
    cureDay->cur = n;
}

void inputDaysOfWeekFromFile(DayOfWeek * cureDay, const char * nameFile)
{
    //format:
    //<your number int>
    //<your number int> 
    FILE *f = fopen(nameFile, "r");
    char str[50] = "";
    fgets(str, 50, f);
    int n1 = atof(str);
    
    cureDay->cur = n1;
    fclose(f);
    
}

//b)
void outputMonthOfYear(MonthOfYear * cureMonth)
{
    printf("Current month: %d\n", *cureMonth);
}

void inputMonthOfYear(MonthOfYear * cureMonth)
{
    enum month m;
    printf("input current month: ");
    scanf("%d", &m);
    cureMonth->cur = m;
}

void inputMonthOfYearFromFile(MonthOfYear * cureMonth, const char * nameFile)
{
    FILE *f = fopen(nameFile, "r");
    char str[50] = "";
    fgets(str, 50, f);
    int n1 = atof(str);
    //printf("n1 = %d\n", n1);
    cureMonth->cur = n1;
    fclose(f);
}

//c)
void outputColorOfSPectr(ColorOfSpectr * cureColor)
{

    printf("Current color is %d", *cureColor);
}

void inputColorOfSpectr(ColorOfSpectr * cureColor)
{
    enum colors color;
    scanf("%d", &color);
    cureColor->cur = color;
}

void inputColorOfSpectrFromFile(ColorOfSpectr * cureColor, const char * nameFile)
{
    FILE *f = fopen(nameFile, "r");
    char str[50] = "";
    fgets(str, 50, f);
    int n1 = atof(str);
    
    cureColor->cur = n1;
    fclose(f);
}


//d

void inputChessFigure(ChessFigure * Figure)
{
    enum figures m;
    printf("input current figure: ");
    scanf("%d", &m);
    Figure->cur = m;
}

void inputChessFigureFromFile(ChessFigure * Figure, const char * nameFile)
{
    FILE *f = fopen(nameFile, "r");
    char str[50] = "";
    fgets(str, 50, f);
    int n1 = atof(str);
    Figure->cur = n1;

}

void outputChessFigure(ChessFigure * Figure)
{
    printf("Current figure: %d\n", *Figure);
}
//ex2


void inputCard(Card * c1)
{
    //    enum color {peak, clubs, tambourine, hearts} cur_color;
    printf("choose card suit by number:\n");
    printf("peak = 0, clubs = 1, tambourine = 2, hearts = 3\n");
    enum color cur_color;
    scanf("%d", &cur_color);
    c1->cur_color = cur_color;
    //enum rank {Seven,Eight, Nine, Ten, Jack, Queen, King, Ace} cur_rank;
    printf("choose card order by number:\n");
    printf("Seven = 0,Eight = 1, ...");
    enum rank cur_rank;
    scanf("%d", &cur_rank);
    c1->cur_rank = cur_rank;
}
void inputCardFromFile(Card * c1, const char * nameFile)
{
    //    enum color {peak, clubs, tambourine, hearts} cur_color;
    //enum rank {Seven,Eight, Nine, Ten, Jack, Queen, King, Ace} cur_rank;

    FILE *f = fopen(nameFile, "r");
    char str[50] = "";
    fgets(str, 50, f);
    int n1 = atof(str);
    c1->cur_color = n1;

    fgets(str, 50, f);
    n1 = atof(str);
    c1->cur_rank = n1;


    fclose(f);

}

bool beat(Card * c1, Card * c2, enum color c1_m)
{
    if (c1->cur_color == c1_m && c2->cur_color == c1_m)
    {
        if (c1->cur_rank > c2->cur_rank) return true;
        return false;
    }
    else if (c1->cur_color == c1_m && c2->cur_color != c1_m) return true;
    else if (c1->cur_color !=  c1_m && c2->cur_color == c1_m) return false;
    else if (c1->cur_color != c1_m && c2->cur_color != c1_m && c1->cur_color == c2->cur_color)
    {
        if (c1->cur_rank > c2->cur_rank) return true;
        return false;
    }
    return false;   
}




//ex3 
///*
void outputUnit_length(Unit_length * cureUnit)
{
    printf("Current length unit %d", *cureUnit);
}

void inputUnit_length(Unit_length * cureUnit)
{
    enum units unit;
    printf("print your dimension by number\n");
    printf("milimeter=0, meter=1, centimeter=2, decimeter=3, kilometer=4\n");
    scanf("%d", &unit);
    cureUnit->cur = unit;
    printf("your number = ");
    scanf("%lf", &cureUnit->a);
}

void length_in_meters(Unit_length * cureUnit)
{
    if (cureUnit->cur == milimeter)
    {
        printf("%lf", 0.001 * cureUnit->a);
    }    
    if (cureUnit->cur == meter)
    {
        printf("%lf", cureUnit->a);
    }    
    if (cureUnit->cur == centimeter)
    {
        printf("%lf", 0.01 * cureUnit->a);
    }
    if (cureUnit->cur == decimeter)
    {
        printf("%lf", 0.1 * cureUnit->a);
    }    
    if (cureUnit->cur == kilometer)
    {
        printf("%lf", 1000 * cureUnit->a);
    }    
}

void inputUnit_length_from_file(Unit_length * cureUnit, const char * nameFile)
{
    FILE *f = fopen(nameFile, "r");
    char str[50] = "";
    fgets(str, 50, f);
    int n1 = atof(str);
    cureUnit->cur = n1;

    fgets(str, 50, f);
    double a = atof(str);
    cureUnit->a = a;
}
//*/
//ex4
void vidminyuvannya(Vidminky * curVidminok)
{
    if (curVidminok->cur == nazyvnyy){
        printf("prohramuvannya , mova, kompyuter");
    }
    if (curVidminok->cur == rodovyy){
        printf("prohramuvannya , movy , kompyutera");
    }
    if (curVidminok->cur == davalnyy){
        printf("prohramuvannyu , movi , kompyuteru");
    }
    if (curVidminok->cur == znakhidnyy){
        printf("prohramuvannya , movu , kompyuter");
    }
    if (curVidminok->cur == orudnyy){
        printf("prohramuvannyam , movoyu, kompyuterom");
    }
    if (curVidminok->cur == mistsevyy){
        printf("prohramuvannyu , movi, kompyuteri");
    }
    if (curVidminok->cur == klychnyy){
        printf("prohramuvannya , movo, kompyutere");
    }
}

enum vidminok inputV()
{
    printf("input vidminok by number\n");
    printf("nazyvnyy=0, rodovyy=1, davalnyy=2, znakhidnyy=3, orudnyy=4, mistsevyy=5, klychnyy=6\n");
    enum vidminok v1;
    scanf("%d", &v1);
    
    return v1;
}

void inputV_fromfile(Vidminky * v, const char * nameFile)
{
    FILE *f = fopen(nameFile, "r");
    char str[50] = "";
    fgets(str, 50, f);
    int n1 = atof(str);
    v->cur = n1;
}

//ex5

int perevirka(Litery * curLitera){
    if ( curLitera->cur == 97 || curLitera->cur == 111 ||  curLitera->cur == 117 || curLitera->cur == 105 ||  curLitera->cur == 121 || curLitera->cur == 101){
        return 1;
    } else{
        return 0;
    }
    
}

void inputFunc()
{
    char sent[100] = "";
    char *rstr;
    printf("word = ");
    rstr = gets(sent);

    int counter = 0;

    for(int i=0; i<sizeof(sent)/sizeof(char) - 1 ; i++){
        Litery l;
        l.cur = sent[i];
        counter += perevirka(&l);
    }
    printf("kilkist: %d\n", counter);

}

void inputFuncFromFile(Litery * lit, const char * nameFile)
{
    FILE *f = fopen(nameFile, "r");
    char str[50] = "";
    fgets(str, 50, f);
    //int n1 = atof(str);

    int counter = 0;

    for(int i=0; i<sizeof(str)/sizeof(char) - 1 ; i++){
        Litery l;
        l.cur = str[i];
        counter += perevirka(&l);
    }
    printf("kilkist: %d\n", counter);
}

//ex6


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
            PastCourse -> cureCourse = 0;
            y = y + vel*array[i];
        }
        if (j % 4 == 1)
        {    
            PastCourse -> cureCourse = 1;
            x = x + vel*array[i];
        }
        if (j % 4 == 2)
        {    
            PastCourse -> cureCourse = 2;
            y = y - vel*array[i];
        }
        if (j % 4 == 3)
        {    
            PastCourse -> cureCourse = 3;
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
    c.cureCourse = n1;

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