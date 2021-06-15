#include<stdio.h>
#include<stdlib.h>

int rfac(int n);

int main()
{
    system("cls");

    int num;

    printf("\n\nEnter the Number : ");
    scanf("%d", &num);

    printf("\n%d Factorial = %d", num, rfac(num));

    return 0;
}

int rfac(int n){
    if(n == 0){
        return 1;
    }else{
        return n * rfac(n - 1);
    }
}
