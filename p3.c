#include <stdio.h>

int main()
{
    //a
    //int a, b, c;
    //scanf("%d, %d, %d", &a, &b, &c);
    //printf("%d %i %i\n", a, b, c);
    //int res = a * b * c;
    //printf("%d\n", res);

    //b
    int a1, b1, c1;
    scanf("%d, %d, %d", &a1, &b1, &c1);
    unsigned long long res1 = (unsigned long long)a1 * b1 * c1;
    printf("%Lu\n", res1);
}