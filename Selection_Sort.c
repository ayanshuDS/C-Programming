#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);
void print_array(int *array, int sizeArray);
void select_sort(int sizeArray, int array[]);

int main()
{
    system("cls");
    
    int x[10] = {6, 7, 9, 8, 1, 0, 2, 4, -10, -7};
    int n = 10;
    
    printf("\n\nArray : \n");
    print_array(&x, n);

    select_sort(n, x);

    printf("\n\nSorted Array : \n");
    print_array(&x, n);

    return 0;
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void print_array(int *array, int sizeArray) {
    for (int i = 0; i < sizeArray; i++) {
        printf("%d ", *array);
        array++;
    }
}

void select_sort(int sizeArray, int array[]) {
    for (int i = 0; i < sizeArray - 1; i++) {
        for(int j = i + 1; j < sizeArray; j++) {
            if (array[i] > array[j]) {
                swap(&array[i], &array[j]);
            }
        }
    }
}
