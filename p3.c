#include <stdio.h>
#include <stdint.h>

void task6_3()
{
    uint64_t m;
    uint8_t j;

    printf("m=");
    scanf("%llu", &m);

    printf("j=");
    scanf("%hhu", &j);

    m = m & ~(1 << (j-1));

    char buf[10];
    sprintf(buf, "%llu", m);
    //printf("m=%llu", m);
    printf("%s", buf);
}

void task6_4()
{
    uint32_t n;
    printf("n=");
    int r = scanf("%u", &n);
    if(r!=1)
    {
        printf("cannot input");
        return;
    }
    uint32_t first8bit = n & 0xFF;
    uint32_t last8bit = n >> 24;

    uint32_t m = ((n<<8)>>16)<<8;
    m |= (first8bit<<24);
    m |= last8bit;

    printf("%u", m);
}

void task6_q(){
    uint32_t m = 3;
    printf("pravui: %llu", m &1);
}

int main()
{
    //task6_3();
    task6_q();
}