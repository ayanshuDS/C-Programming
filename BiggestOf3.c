#include<stdio.h>

int main()
{
    int num1, num2, num3;

    printf("\n\nEnter 3 Numbers : \n");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    if(num1 > num2){
        if(num1 > num3){
            printf("\n\n%d is Greater Number.\n", num1);
        }else{
            printf("\n\n%d is Greater Number.\n", num3);
        }
    }else{
        if(num2 > num3){
            printf("\n\n%d is Greater Number.\n", num2);
        }else{
            printf("\n\n%d is Greater Number.\n", num3);
        }
    }
}