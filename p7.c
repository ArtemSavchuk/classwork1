#include <stdio.h>
#include <math.h>
#include <float.h>
int sqr_eqn_solve1(double a, double b, double c)
{
    double D = b*b - 4*a*c;
    double x1,x2;
    double epsilon = 2 * DBL_EPSILON;
    double x11, x21;

    if(fabs(a) < epsilon)
    {
        if(fabs(b)<epsilon)
        {
            if(fabs(c) < epsilon)
            {
                printf("INFINITY\n");
                return -1;
            }
            printf("Not equation\n");
            return -2;
        }

        //printf("One linear root\n");
        x1 = -c / b;
        if(x1 > 0)
        {
            //double x11, x21;
            x11 = sqrt(x1);
            x21 = sqrt(x1) * (-1);
            printf("Two roots\n");
            printf("%lf %lf\n", x11, x21);
            return 2;
        }
        else
        {
            printf("No roots\n");
            return 0;
        }
        //printf("%lf\n", x1);
        //return 1;
    }
    
    if(fabs(D)<epsilon)
    {
        //printf("One root");
        x1 = -b / 2 / a;
        if(x1 > 0)
        {
            //double x11, x21;
            x11 = sqrt(x1);
            x21 = sqrt(x1) * (-1);
            printf("Two roots\n");
            printf("%lf %lf\n", x11, x21);
            return 2;
        }
        else
        {
            printf("No roots\n");
            return 0;
        }
        //printf("%lf", x1);
        //return 1;
    }
    else if(D<0)
    {
        printf("No roots\n");
        return 0;
    }
    else
    {
        //printf("Two roots");
        x1 = (-b - sqrt(D)) / 2 / a;
        if(x1 > 0)
        {
            //double x11, x21;
            x11 = sqrt(x1);
            x21 = sqrt(x1) * (-1);
            printf("Two roots\n");
            printf("%lf %lf\n", x11, x21);
            //return 1;
        }
        else
        {
            printf("No roots\n");
            //return 0;
        }
        x2 = (-b + sqrt(D)) / 2 / a;
        if(x2 > 0)
        {
            //double x11, x21;
            x11 = sqrt(x2);
            x21 = sqrt(x2) * (-1);
            printf("Two roots\n");
            printf("%lf %lf\n", x11, x21);
            //return 1;
        }
        else
        {
            printf("No roots\n");
            //return 0;
        }
        //printf("%lf %lf\n", x1, x2);
        return 1;
    }
    return 2;
}

int sqr_eqn_solve(double a, double b, double c)
{
    double D = b*b - 4*a*c;
    double x1,x2;
    double epsilon = 2 * DBL_EPSILON;
    //double x11, x21;

    if(fabs(a) < epsilon)
    {
        if(fabs(b)<epsilon)
        {
            if(fabs(c) < epsilon)
            {
                printf("INFINITY\n");
                return -1;
            }
            printf("Not equation\n");
            return -2;
        }

        printf("One linear root\n");
        x1 = -c / b;
        printf("%lf\n", x1);
        return 1;
    }
    
    if(fabs(D)<epsilon)
    {
        printf("One root\n");
        x1 = -b / 2 / a;
        printf("%lf\n", x1);
        return 1;
    }
    else if(D<0)
    {
        printf("No roots\n");
        return 0;
    }
    else
    {
        printf("Two roots\n");
        x1 = (-b - sqrt(D)) / 2 / a;
        x2 = (-b + sqrt(D)) / 2 / a;
        printf("%lf %lf\n", x1, x2);
        return 1;
    }
    return 2;
}

int main()
{
    double a, b, c;
    int r1 = sqr_eqn_solve(0,0,0);

    scanf("%lf %lf %lf", &a, &b, &c);
    int res = sqr_eqn_solve(a, b, c);
    printf("%d roots\n", res);

    res = sqr_eqn_solve1(a, b, c);
    printf("%d roots\n", res);
}