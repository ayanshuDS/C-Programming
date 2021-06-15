#include<stdio.h>
#include<stdlib.h>

void print_matrix(int row, int column, int *matrix);
void lower_matrix(int row, int column, int matrix[row][column]);

int main()
{
    system("cls");

    int x[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("\n\nMatrix : \n");
    print_matrix(3, 3, &x[0][0]);

    printf("\nUpper Triangular Matrix : \n");
    lower_matrix(3, 3, x);

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

void lower_matrix(int row, int column, int matrix[row][column]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(j <= i){
                printf("%4d", matrix[i][j]);
            }else{
                printf("    ");
            }
        }
        printf("\n");
    }
}
