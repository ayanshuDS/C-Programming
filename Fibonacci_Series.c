#include <stdio.h>

void fibonacci(int N);

int main()
{
    int n;
    printf("\n\nEnter the no. of terms : ");
    scanf("%d", &n);

    printf("\nFibonacci Series of %d terms : \n", n);
    fibonacci(n);

    return 0;
}

void fibonacci(int N)
{
    int t1 = 0, t2 = 1, next;

    for(int i = 0; i < N; i++)
    {
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
}
