#include <stdio.h>
#include <stdlib.h>

//Switch between Custom Input and Predefined Input.

void InsertionSort(int sizeArray, int array[sizeArray]);

int main()
{
    system("cls");

    int N = 10;
    int arr[10]={6,7,9,8,1,0,2,4,-10,-7};

    printf("\n\nArray : ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    // int N;
    // printf("\n\nEnter the Size of Array : ");
    // scanf("%d", &N);

    // int arr[N];
    // printf("\nEnter the Array Elements : ");
    // for (int i = 0; i < N; i++) {
    //     scanf("%d", &arr[i]);
    // }
    
    InsertionSort(N, arr);

    printf("\n\nSorted Array : ");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void InsertionSort(int sizeArray, int array[sizeArray]) {
    for (int i = 1; i < sizeArray; i++) {
        int j = i - 1;
        int temp = array[i];
        while ((j >= 0) && (temp < array[j])) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;
    }
}
