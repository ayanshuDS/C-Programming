#include<stdio.h>

void evencount(int size, int array[]);
void oddcount(int size, int array[]);
void print_array(int N, int *array);

int main()
{
    int arr[50];
    
    printf("\nEnter the Elements : ");
    int i = 0;
    while(i < 50){
        scanf("%d", &arr[i]);
        if(arr[i] < 0){
            break;
        }
        i++;
    }

    printf("\n\nTotal Elements : ");
    print_array(i, &arr);
    printf("\nTotal Count : %d\n", i);

    evencount(i, arr);
    oddcount(i, arr);
}

void evencount(int size, int array[]){
    int count = 0;

    printf("\nEven Elements : ");
    for(int i = 0; i < size; i++){
        if(array[i] % 2 == 0){
            printf("%d ", array[i]);
            count++;
        }
    }
    printf("\nNumber of Elements : %d\n", count);
}

void oddcount(int size, int array[]){
    int count = 0;

    printf("\nOdd Elements : ");
    for(int i = 0; i < size; i++){
        if(array[i] % 2 != 0){
            printf("%d ", array[i]);
            count++;
        }
    }
    printf("\nNumber of Elements : %d\n", count);
}

void print_array(int N, int *array)
{
    for(int i = 0; i < N; i++)
    {
        printf("%d ", *array);
        array++;
    }
}
