#include <stdio.h>
#include <math.h>

void punkt_a(unsigned int number)
{
    int od = number % 10;
    number = number / 10;
    int ds = number % 10;
    number = number / 10;
    int st = number % 10;

    printf("od = %i, ds = %i, st = %i\n", od, ds, st);
}

void punkt_b(unsigned int number)
{
    int sum = 0;
    
    while(number > 0)
    {
        sum = sum + number%10;
        number = number / 10;
    }
    printf("%i\n", sum);

}

void punkt_c(unsigned int number)
{
    int new_n = 0;
    int poryadok = 0;
    unsigned int number1 = number;

    while(number1 > 0)
    {
        poryadok = poryadok + 1;
        number1 = number1 / 10;
    }
    printf("%i\n", poryadok);
    number1 = number;
    int od = 0;
    while (number1 > 0)
    {
        od = number1 % 10;
        poryadok = poryadok - 1;
        new_n = new_n + od * pow(10, poryadok);
        //printf("newstep %i\n", new_n);
        
        number1 = number1 / 10;   
    }
    printf("%i\n", new_n);
}

int main()
{
    unsigned int number;
    scanf("%i", &number);
    punkt_a(number);
    punkt_b(number);
    punkt_c(number);

}