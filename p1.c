#include <stdio.h>
#include <stdint.h>

void task6_1()
{
    unsigned char n;
    scanf("%hhu", &n);

    uint64_t m = 1UL<<n;
    printf("%u\n", n);
    printf("m = %llu ,%Lx", m, m);
}

int main()
{
    task6_1();
}