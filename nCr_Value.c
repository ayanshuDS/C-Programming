#include<stdio.h>

int rfac(int n);
int nCr(int n, int r);

int main()
{
    int n, r;

    printf("\n\nEnter the Value of 'n' : ");
    scanf("%d", &n);
    printf("\nEnter the Value of 'r' : ");
    scanf("%d", &r);

    printf("\nValue of nCr : %d", nCr(n, r));
}

int rfac(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * rfac(n - 1);
    }
}

int nCr(int n, int r) {
    int result = rfac(n) / (rfac(n - r) * rfac(r));
    return result;
}
