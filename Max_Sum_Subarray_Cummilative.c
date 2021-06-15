#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    system("cls");

    int N;
    printf("\n\nEnter the Size of Array : ");
    scanf("%d", &N);

    int arr[N];
    printf("\nEnter the Array Elements : ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int cummiSum[N + 1];
    cummiSum[0] = 0;
    for (int i = 1; i <= N; i++) {
        cummiSum[i] = cummiSum[i - 1] + arr[i - 1];
    }

    int maxSum = INT_MIN;
    for (int i = 1; i <= N; i++) {
        int currentSum = 0;
        for (int j = 0; j < i; j++) {
            currentSum = cummiSum[i] - cummiSum[j];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }

    printf("\nMaximum Sum of Sub-Array : %d", maxSum);

    return 0;
}
