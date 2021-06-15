#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");

    int row;

    printf("\n\nEnter the Rows of Pattern : ");
    scanf("%d", &row);

    printf("______________________________\n\n");

    while(row){
        for(int i = 1; i <= row; i++){
            printf("* ");
        }
        printf("\n");
        row--;
    }

    return 0;
}
