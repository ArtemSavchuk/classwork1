#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

typedef struct
{
    double rad;
    int x;
    int y;
}Colo;

Colo input_Colo()
{
    Colo colo;
    printf("radius = ");
    scanf("%lf", &colo.rad);
    printf("x = ");
    scanf("%d", &colo.x);
    printf("y = ");
    scanf("%d", &colo.y);

    return colo;
}

void output_Colo(Colo colo)
{
    printf("radius = %lf, (x, y) = (%d, %d)", colo.rad, colo.x, colo.y);
}

void allFunc()
{
    Colo c1 = input_Colo();
    output_Colo(c1);
}

int main()
{
    allFunc();
}