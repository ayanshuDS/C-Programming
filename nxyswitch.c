#include<stdio.h>

int main()
{
    int n, x, y;
    
    printf("\n\nEnter the value of 'n' : ");
    scanf("%d", &n);
    printf("\nEnter the value of 'x' : ");
    scanf("%d", &x);

    switch (n)
    {
    case 1:
        y = n + x;
        printf("\ny = %d + %d\n = %d\n", n, x, y);
        break;
    
    case 2:
        y = 1 + x/n;
        printf("\ny = 1 + %d/%d\n = %d\n", x, n, y);
        y = 1 + n * x;
        printf("\ny = 1 + %d*%d\n = %d\n", x, n, y);
        break;
    
    case 3:
        y = n + 3 * x;
        printf("\ny = %d + 3*%d\n = %d\n", n, x, y);
        break;
    
    default:
        printf("\n\nNO RESULTS!\n");
        break;
    }
}
