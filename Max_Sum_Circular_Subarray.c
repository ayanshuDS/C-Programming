#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int KadaneSum(int sizeArray, int array[sizeArray]);

int main()
{
    system("cls");

    int N;
    printf("\n\nEnter Size of Array : ");
    scanf("%d", &N);

    int arr[N];
    printf("\nEnter the Array Elements : ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int nonwrapedSum = KadaneSum(N, arr);

    int totalSum = 0;
    for (int i = 0; i < N; i++) {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    // int wrapedSum = totalSum - -KadaneSum(N, arr);
    int wrapedSum = totalSum + KadaneSum(N, arr);

    // printf("\n\nWrap Sum = %d && Non-Wrap Sum = %d", wrapedSum, nonwrapedSum);
    printf("\nMaximum Circular Sub-Array Sum : %d", wrapedSum);

    return 0;
}

int KadaneSum(int sizeArray, int array[sizeArray]) {
    int currentSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < sizeArray; i++) {
        currentSum += array[i];
        if (currentSum < 0) {
            currentSum = 0;
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}
