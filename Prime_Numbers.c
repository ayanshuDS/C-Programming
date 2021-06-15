#include<stdio.h>
#include<math.h>

int isprime(int n);

int main()
{
    int num;

    printf("\n\nEnter the Number : \n");
    scanf("%d", &num);

    if(isprime(num) == 1)
        printf("\n%d is a PRIME NUMBER.\n", num);
    else
        printf("\n%d is NON-PRIME NUMBER!\n", num);
    
}

int isprime(int n){
    for(int i = 2; i < sqrt(n); i++){
        if((n % i) == 0)
            return 0;
    }
    return 1;
}
