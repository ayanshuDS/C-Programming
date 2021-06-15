#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");

    int row;

    printf("\n\nEnter the Rows of Pattern : ");
    scanf("%d", &row);

    printf("_______________________________\n\n");

    for (int i = 1; i <= row; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
