#include<stdio.h>

int fac(int n);
int rfac(int n);

int main()
{
    int num;

    printf("\n\nEnter the Number : ");
    scanf("%d", &num);

    printf("\n%d Factorial : %d", num, fac(num));
    printf("\n%d Recursive Factorial : %d", num, rfac(num));
}

int rfac(int n){
    if(n == 0){
        return 1;
    }else{
        return n * rfac(n - 1);
    }
}

int fac(int n){
    int result = 1;
    while(n > 0){
        result = result * n;
        n--;
    }

    return result;
}
