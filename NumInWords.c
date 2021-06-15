#include<stdio.h>

void numtoword(int n);

int main()
{
    int num;

    printf("\n\nEnter the Number : ");
    scanf("%d", &num);

    printf("\n%d =", num);
    numtoword(num);
}

void numtoword(int n){
    int reverse = 0;
    while(n){
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    while(reverse){
        switch(reverse % 10){
            case 0:
                printf(" Zero");
                break;
    
            case 1:
                printf(" One");
               break;

            case 2:
                printf(" Two");
                break;
    
            case 3:
                printf(" Three");
                break;
    
            case 4:
                printf(" Four");
                break;
    
            case 5:
                printf(" Five");
                break;
    
            case 6:
                printf(" Six");
                break;
    
            case 7:
                printf(" Seven");
                break;
    
            case 8:
                printf(" Eight");
                break;
    
            case 9:
                printf(" Nine");
                break;
    
            default:
                break;
        }

        reverse /= 10;
    }
}
