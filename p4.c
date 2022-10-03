#include <stdio.h>
#include <stdint.h>

uint16_t mult(uint8_t x, uint8_t y)
{
    return (uint16_t)((uint32_t)x*y);
}

int main()
{
    unsigned a,b;
    unsigned short c;

    scanf("%hhu %hhu", &a, &b);
    c = mult(a, b);
    printf("c = %hu",c);
}