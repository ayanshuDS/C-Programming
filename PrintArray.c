#include<stdio.h>

void print_array(int N, int *array);

int main()
{
    int x[10]={1,2,3,4,5,6,7,8,9,10};
    
    printf("\nArray : ");
    print_array(10, &x[0]);
}

void print_array(int N, int *array)
{
    for(int i = 0; i < N; i++)
    {
        printf("%d ", *array);
        array++;
    }
}




