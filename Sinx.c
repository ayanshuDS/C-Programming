#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("cls");

    float x = 90;
    int y = x;

    x = x * (3.14 / 180);

    printf("\n\nValue of sin(%d) = %f", y, sin(x));

    return 0;
}
