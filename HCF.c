#include<stdio.h>
#include<stdlib.h>

int HCF(int n1, int n2);

int main()
{
    system("cls");

    int num1, num2;

    printf("\n\nEnter the 1st Number : ");
    scanf("%d", &num1);
    printf("\nEnter the 2nd Number : ");
    scanf("%d", &num2);

    printf("\nHCF of %d and %d = %d", num1, num2, HCF(num1, num2));

    return 0;
}

int HCF(int n1, int n2){
    int remainder = 1;
    
    if(n1 > n2){
        while(remainder){
            remainder = n1 % n2;
            if(remainder == 0)
                break;
            n1 = n2;
            n2 = remainder;
        }
        return n2;
    }else{
        while(remainder){
            remainder = n2 % n1;
            if(remainder == 0)
                break;
            n2 = n1;
            n1 = remainder;
        }
        return n1;
    }
}
