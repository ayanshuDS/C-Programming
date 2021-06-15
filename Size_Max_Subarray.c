#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int N, pd, size = 2, csize = 2;

    printf("\n\nEnter the Size of Array : ");
    scanf("%d", &N);

    int arr[N];
    printf("\nEnter the Elements : ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    pd = arr[1] - arr[0];

    for (int i = 2; i < N; i++) {
        if (pd == arr[i] - arr[i - 1]) {
            csize++;
        } else {
            pd = arr[i] - arr[i - 1];
            csize = 2;
        }

        if (csize > size) {
            size = csize;
        }
    }

    printf("\nSize of Maximum Sub array : %d", size);

    return 0;
}
