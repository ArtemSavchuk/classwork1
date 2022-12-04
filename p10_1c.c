#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    int day;
    int month;
    int year;
} Date;

typedef struct
{ 
    char column; 
    int row;   
} Chess_Borad;

typedef struct
{
    int x;
    int y;
} Point;

typedef struct
{
    Point point1;

    Point point2;
} Rectangle;

typedef struct 
{
    int stepin;
    double *cof;
} Polynome;





Date inputDate() 
{
    Date date;
    //int enter = 1;

    int lengthOfMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool wrtr = true;
    while (wrtr)
    {
    int day;
    printf("day = ");
    scanf("%d", &day);

    int month;
    printf("month = ");
    scanf("%d", &month);

    int year;
    printf("year = ");
    scanf("%d", &year);

    if(lengthOfMonths[month-1] >= day)
    {
        date.day = day;
        date.month = month;
        date.year = year;
        wrtr = false;
    }
    else printf("Wrong data");
    }
    return date;
    
}

Chess_Borad inputChess(){
    Chess_Borad position;
    
    bool wrtr = true;
    while (wrtr)
    {
        wrtr = false;
        //int roww;
        printf("row and column = ");
        scanf("%d %c", &position.row, &position.column);

        if(position.column != 'a' && position.column != 'b' && position.column != 'c' && position.column != 'd' && position.column != 'e' && position.column != 'f' && position.column != 'g' && position.column != 'h')
        {
            printf("try again1\n");
            wrtr = true;
        }
        if(position.row < 1 || position.row > 8)
        {
            printf("try again2");
            wrtr = true;
        }
        //position.column = coll;

    }
    
    return position;
}

Point input_point()
{
    Point point;
    int x;
    printf("x = ");
    scanf("%d", &x);

    int y;
    printf("y = ");
    scanf("%d", &y);

    point.x = x;
    point.y = y;

    return point;
}

Rectangle inputRectangle()
{
    Rectangle rect;
    bool wrtr = true;
    Point point1_1;
    Point point2_1;
    while (wrtr)
    {
        
    
    point1_1 = input_point();

    
    point2_1 = input_point();

    if(point1_1.x == point2_1.x || point2_1.y == point1_1.y) printf("wrong data");
    else 
    {
        wrtr = false;
    }
    }
    rect.point1 = point1_1;
    rect.point2 = point2_1;
    //rec
    return rect;
}

Polynome inputPolynome()
{
    Polynome polyn;
    
    printf("deg = ");
    scanf("%d", &polyn.stepin);
    printf("%d", polyn.stepin);
    printf("%d", sizeof(polyn.cof));
    polyn.cof = (double *) calloc(polyn.stepin, sizeof(double));
    
    for(int i = 0; i < polyn.stepin+1; i++)
    {
        printf("st = ");
        scanf("%lf", &polyn.cof[i]);
    }
    return polyn;
    
}

void output_Date(Date date){
    printf("%d.%d.%d\n", date.day, date.month, date.year);
}

void output_Chess_Board(Chess_Borad position){
    printf("\n%c %d\n", position.column, position.row);
}

void output_Rectangle(Rectangle r){
    printf("First point: (%d, %d), second point: (%d, %d)", r.point1.x, r.point1.y, r.point2.x, r.point2.y);
}

void output_Polynome(Polynome polyn){
    for(int i = 0; i < polyn.stepin; i++)
    {
        printf("%.2lfx^%d + ", polyn.cof[polyn.stepin - i], polyn.stepin - i);
    }
    printf("%.2lf", polyn.cof[0]);
}






void data_input_output()
{
    Date date;
    date = inputDate();
    output_Date(date);

    Chess_Borad chb;
    chb = inputChess();
    output_Chess_Board(chb);

    Rectangle rect;
    rect = inputRectangle();
    output_Rectangle(rect);

    Polynome pol;
    pol = inputPolynome();
    output_Polynome(pol);
    free(pol.cof);
}

int main()
{
    data_input_output();
}