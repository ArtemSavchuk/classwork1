#include <stdio.h>

void perest(unsigned int n)
{
    int a1, a2, a3;
    a1 = n % 10;
    n = n / 10;
    a2 = n % 10;
    n = n / 10;
    a3 = n;
    int c1, c2, c3, c4, c5, c6;

    if(a1 != a2 && a2 != a3 && a1 != a3)
    {
        
        c1 = 100 * a1 + 10 * a2 + a3;
        c2 = 100 * a1 + 10 * a3 + a2;
        c3 = 100 * a2 + 10 * a1 + a3;
        c4 = 100 * a2 + 10 * a3 + a1;
        c5 = 100 * a3 + 10 * a1 + a2;
        c6 = 100 * a3 + 10 * a2 + a1;
    }

    printf("%i %i %i\n", c1, c2, c3);
    printf("%i %i %i\n", c4, c5, c6);


}

int main()
{
    unsigned int n;
    scanf("%i", &n);
    perest(n);
}