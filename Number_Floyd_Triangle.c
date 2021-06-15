#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");

    int row, num = 1;

    printf("\n\nEnter the Rows of Pattern : ");
    scanf("%d", &row);

    printf("_____________________________\n\n");

    for (int i = 1; i <= row; i++){
        for (int j = 1; j <= i; j++){
            printf("%2d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
