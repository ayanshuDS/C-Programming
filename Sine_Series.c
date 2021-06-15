#include <stdio.h>
#include <stdlib.h>

float sine_value(float degree);

int main()
{
    system("cls");

    float degree;

    printf("\n\nEnter the value in Degrees : ");
    scanf("%f", &degree);

    printf("\nValue of sin(%0.0f) = %0.2f", degree, sine_value(degree));

    return 0;
}

float sine_value(float degree){
    int accuracy = 4, sign = 1;
    float sinx = 0;

    degree = degree * (3.14 / 180);

    for (int i = 1; i <= 2 * accuracy; i += 2){
        float dpower = 1;
        int factorial = 1;

        for(int j = 1; j <= i; j++){
            dpower *= degree;
            factorial *= j;
        }

        sinx += sign * (dpower / factorial);
        sign = sign * (-1);
    }

    return sinx;
}
