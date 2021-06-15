#include<stdio.h>

int num_rev(int n);

int main()
{
    int num;

    printf("\n\nEnter the Number : ");
    scanf("%d", &num);

    printf("\nReverse of %d = %d", num, num_rev(num));
}

int num_rev(int n){
    int reverse = 0;
    while(n){
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return reverse;
}
