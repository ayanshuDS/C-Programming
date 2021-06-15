#include <stdio.h>

int rfac(int n);
int nCr(int n, int r);

int main()
{
    int n;

    printf("\n\nEnter the Number of Rows : ");
    scanf("%d", &n);

    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", nCr(i, j));
        }
        printf("\n");
    }

    return 0;
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
}
