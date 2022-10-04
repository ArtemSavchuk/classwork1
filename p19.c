#include <stdio.h>
 
int d()
{
    unsigned number;
    printf("Your number = ");
    scanf("%d", &number);
    unsigned n1, n2;
    n1 = number % 10;
    number = number / 10;
    n2 = number;
    unsigned n3 = n1 + n2;
    printf("n3 = %d\n", n3);
    if(n3 >= 10)
    {
        return 1;
    }
    
    return 0;
    

}

int e()
{   
    int x, y;
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);

    int dif = x - y;
    printf("dif = %d\n", dif);
    if(dif >= 7)
    {
        return 1;
    }
    return 0;
}

int ye()
{
    printf("x, y, z = ");
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if(x > 99 || y > 99 || z > 99) return 1;
    return 0;
}

int j()
{
    printf("x, y, z = ");
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if(x < 1001 && y >= 1001 && z >= 1001) return 1;
    else if (y < 1001 && x >= 1001 && z >= 1001) return 1;
    else if (z < 1001 && x >= 1001 && y >= 1001) return 1;
    
    return 0;
}

int main()
{
    int k;
    k = d();
    printf("%d\n", k);

    k = e();
    printf("%d\n", k);

    k = ye();
    printf("%d\n", k);

    k = j();
    printf("%d\n", k);

}