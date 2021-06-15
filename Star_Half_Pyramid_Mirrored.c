#include<stdio.h>
#include<stdlib.h>

int main()
{
    system("cls");

    int row;

    printf("\n\nEnter the Rows of Pattern : ");
    scanf("%d", &row);

    printf("______________________________\n\n");

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= row; j++){
            if(j <= row - i){
                printf("  ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
