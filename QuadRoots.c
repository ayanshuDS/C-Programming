#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, D;
    float x1, x2;

    printf("\n\nEnter Coefficients 'a', 'b', 'c' of (ax² + bx + c = 0) : ");
    scanf("%d%d%d", &a, &b, &c);

    D = b * b - 4 * a * c;

    if(D > 0)
    {
        printf("\nEquation has REAL and DISTINCT ROOTS.");

        x1 = (-b + sqrt(D)) / 2 * a;
        x2 = (-b - sqrt(D)) / 2 * a;

        printf("\nRoot are %f & %f", x1, x2);
    }
    else if(D == 0)
    {
        printf("\nEquation has REAL and IDENTICAL ROOTS.");

        x1 = (-b + sqrt(D)) / 2 * a;
        x2 = (-b - sqrt(D)) / 2 * a;

        printf("\nRoots are %f and %f", x1, x2);
    }
    else
        printf("\nEquation has NO REAL ROOTS.");

}
