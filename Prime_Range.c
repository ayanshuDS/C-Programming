#include<stdio.h>
#include<math.h>

int isprime(int n);

int main()
{
    int lower, upper;

    printf("\n\nEnter the Range of Prime Numbers.\n");
    printf("\nEnter Lower Limit : ");
    scanf("%d", &lower);
    printf("\nEnter Upper Limit : ");
    scanf("%d", &upper);

    printf("\nPrime Numbers from %d to %d : \n", lower, upper);
    for(int i = lower; i <= upper; i++){
        if(isprime(i) == 1)
            printf("%d ", i);
    }

    return 0;
}

int isprime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if((n % i) == 0)
            return 0;
    }
    return 1;
}
