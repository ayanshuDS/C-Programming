#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int N, max = 0, days = 0;

    printf("\n\nEnter the No. of Days : ");
    scanf("%d", &N);

    int arr[N + 1];
    arr[N] = 1;
    printf("\nEnter the No. of Visitors on respective days : ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < N; i++) {
        if (arr[i] > max && arr[i] > arr[i + 1]) {
            days++;
            max = arr[i];
        }
    }

    printf("\nNo. of Record Breaking Days : %d", days);

    return 0;
}
