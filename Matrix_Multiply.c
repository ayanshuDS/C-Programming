#include<stdio.h>
#include<stdlib.h>

void pro_matrix(int L, int M, int N, int mat1[L][M], int mat2[M][N]);
void print_matrix(int row, int column, int *matrix);

int main()
{
    system("cls");

    int x1[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int x2[3][2] = {{1, 1}, {1, 1}, {1, 1}};

    printf("\n\nMatrix 1 : \n");
    print_matrix(3, 3, &x1[0][0]);

    printf("\n\nMatrix 2 : \n");
    print_matrix(3, 2, &x2[0][0]);

    printf("\n\n(Matrix 1) x (Matrix 2) : \n");
    pro_matrix(3, 3, 2, x1, x2);

    return 0;
}

void pro_matrix(int L, int M, int N, int mat1[L][M], int mat2[M][N]){
    for(int i = 0; i < L; i++){
        for(int k = 0; k < N; k++){
            int temp = 0;
            for(int j = 0; j < M; j++){
                temp = temp + mat1[i][j] * mat2[j][k];
            }
            printf("%4d", temp);
        }
        printf("\n");
    }
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
