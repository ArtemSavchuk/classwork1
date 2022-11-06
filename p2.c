#include <stdio.h>
#include <stdint.h>

void task6_2()
{
    int n;
    unsigned m;
    printf("n,m=");
    scanf("%d", &n);
    scanf("%u", &m);

    int res = n | (1<<m);
    printf("r=%d", res);
}

int main()
{
    task6_2();
}

