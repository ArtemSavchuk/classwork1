#include <stdio.h>

int summ(int numb)
{
    int sum1 = 0;
    while(numb > 0)
    {
        sum1 = sum1 + numb % 10;
        numb = numb / 10;
    }
    return sum1;
}
int main()
{   
    //int v = summ(123);
    //printf("%u",v);

    int a, b;
    scanf("%d,%d", &a, &b);
    if(a >=b )
    {
        printf("\nmax=%d,min=%d", a, b);
    }
    else
    {
        printf("\nmax=%d,min=%d", b, a);
    }
}