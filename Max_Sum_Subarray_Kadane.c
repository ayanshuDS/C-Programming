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

    printf("\nMaximum Sum of Sub-Array : %d", KadaneSum(N, arr));

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
