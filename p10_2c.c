//#include "p10_1c.c"
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

typedef struct
{ 
    char column; 
    int row;   
} Chess_Borad;

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


void quen_step(Chess_Borad pos1, Chess_Borad pos2){
    if(pos1.row == pos2.row || pos1.column == pos2.column || abs(pos1.row - pos2.row) == abs(pos1.column - pos2.column))
    {
        //printf("%d\n", abs(pos1.row - pos2.row));
        //printf("%d\n", abs(pos1.column - pos2.column));
        printf("Queen can");
    }
    else 
    {
        printf("Queen can not");
    }
}


void tryQuenStep()
{
    Chess_Borad ch1, ch2;
    ch1 = inputChess();
    ch2 = inputChess();
    quen_step(ch1, ch2);
}

int main()
{
    tryQuenStep();
}