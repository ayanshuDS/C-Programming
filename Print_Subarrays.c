#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int N;

    printf("\n\nEnter the Size of Array : ");
    scanf("%d", &N);

    int arr[N];
    printf("\nEnter the Elements : ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nSub-arrays are : \n");
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            for (int k = i; k <= j; k++) {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
