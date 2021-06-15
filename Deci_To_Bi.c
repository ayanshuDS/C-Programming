#include<stdio.h>

void decitobi(int decimal);

int main()
{
    int num;

    printf("\n\nEnter the Number : ");
    scanf("%d", &num);

    printf("\n%d in Binary = ", num);
    decitobi(num);
}

void decitobi(int decimal){
    int binary[64] = {0};

    int i = 0;
    while(decimal){
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    i--;
    while(i >= 0){
        printf("%d", binary[i]);
        i--;
    }
}
