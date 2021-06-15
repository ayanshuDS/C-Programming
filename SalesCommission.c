#include<stdio.h>

float calcomm(int amount);

int main()
{
    int sale[10], n;

    printf("\n\nEnter the Number of Sales : ");
    scanf("%d", &n);

    printf("\nEnter the Respective Amounts : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &sale[i]);
    }

    for(int i = 0; i < n; i++){
        printf("\n\nSale %d : Amount : %d", i + 1, sale[i]);
        printf("\nCommission : %f", calcomm(sale[i]));
    }
}

float calcomm(int amount){
    float commission;

    if(amount <= 500){
        commission = 0.05 * amount;
    }else if(amount > 500 && amount <= 2000){
        commission = 35 + 0.1 * amount;
    }else if(amount > 2000 && amount <= 5000){
        commission = 185 + 0.12 * amount;
    }else{
        commission = 0.125 * amount;
    }

    return commission;
}
