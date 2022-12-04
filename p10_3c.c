#include <stdio.h>
#include <stdbool.h>
#include <math.h>

typedef struct
{
    int day;
    int month;
    int year;
} Date;

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

void output_Date(Date date)
{
    printf("%d.%d.%d\n", date.day, date.month, date.year);
}

Date new_D(Date date1)
{
    Date date2;

    int lengthOfMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(date1.day + 1 <= lengthOfMonths[date1.month - 1])
    {
        date2.day = date1.day+1;
        date2.month = date1.month;
        date2.year = date1.year;
    }
    else
    {
        if(date1.month < 12)
        {
            date2.day = 1;
            date2.month = date1.month + 1;
            date2.year = date1.year;
        }
        else
        {
            date2.year = date1.year + 1;
            date2.month = 1;
            date2.day = 1;
        }
    }

    return date2;
}

void getDayOfWeek(Date d){
    printf("%d-th day", (d.day + 2 * d.month + 3 * (d.month + 1) / 5 + d.year + d.year / 4 - d.year / 100 + d.year / 400 + 1) % 7);
}

void dayOfWeekAndNextDay()
{
    Date date;
    date = inputDate();

    Date date1 = new_D(date);
    output_Date(date1);

}

int main()
{
    dayOfWeekAndNextDay();
}
