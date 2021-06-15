#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");

    int row, column;

    printf("\n\nEnter Row of Pattern : ");
    scanf("%d", &row);
    printf("\nEnter Column of Pattern : ");
    scanf("%d", &column);

    printf("___________________________\n\n");

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= column; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
