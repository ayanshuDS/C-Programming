#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");

    int row, i;

    printf("\n\nEnter Upper Half of Butterfly : ");
    scanf("%d", &row);

    printf("__________________________________\n\n");

    for(i = 1; i <= row; i++){
        for(int j = 1; j <= 2 * row; j++){
            if((j > i) && (j <= 2 * row - i)){
                printf("  ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
    i--;
    while(i >= 1){
        for (int j = 1; j <= 2 * row; j++){
            if((j > i) && (j <= 2 * row - i)){
                printf("  ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
        i--;
    }

    return 0;
}
