#include <stdio.h>
#include <stdlib.h>

int HCF(int n1, int n2);

int main()
{
    system("cls");

    int num1, num2;

    printf("\n\nEnter the 1st Number : ");
    scanf("%d", &num1);
    printf("\nEnter the 2nd Number : ");
    scanf("%d", &num2);

    if (num1 >= num2) {
        printf("\nHCF of %d and %d = %d", num1, num2, HCF(num1, num2));
    } else {
        printf("\nHCF of %d and %d = %d", num1, num2, HCF(num2, num1));
    }

    return 0;
}

int HCF(int n1, int n2) {
    n1 = n1 % n2;
    if (n1 == 0) {
        return n2;
    } else {
        return HCF(n2, n1);
    }
}
