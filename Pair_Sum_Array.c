#include <stdio.h>
#include <stdlib.h>

//Works only when the Array is Sorted.
//Sort the Array if Not sorted already.

int main()
{
    system("cls");

    // int N = 8;
    // int arr[8] = {2, 4, 7, 11, 14, 16, 20, 21};

    // int targetSum = 31;

    int N;
    printf("\n\nEnter the Size of Array : ");
    scanf("%d", &N);

    int arr[N];
    printf("\nEnter the Elements : ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int targetSum;
    printf("\nEnter the Target Sum of a Pair : ");
    scanf("%d", &targetSum);

    int start = 0, end = N - 1, currentSum;
    while (start < end) {
        currentSum = arr[start] + arr[end];
        if (currentSum > targetSum) {
            end--;
        } else if (currentSum < targetSum) {
            start++;
        } else {
            printf("\n\nIndex : (%d, %d)", start, end);
            printf("\nPair : (%d, %d)", arr[start], arr[end]);
            end--;
            start++;
        }
    }

    return 0;
}
