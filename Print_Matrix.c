#include<stdio.h>
#include<stdlib.h>

void print_matrix(int row, int column, int *matrix);

int main()
{
    system("cls");

    int x[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("\n\nMatrix : \n");
    print_matrix(3, 3, &x[0][0]);

    return 0;
}

void print_matrix(int row, int column, int *matrix){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%4d", *matrix);
            matrix++;
        }
        printf("\n");
    }
}
