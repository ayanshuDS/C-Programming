#include<stdio.h>

int main()
{
    int max, min, mean, sum = 0;
    int n, num;

    printf("\n\nEnter the Number of Element : ");
    scanf("%d", &n);

    printf("\nEnter the Values : ");
    for(int i = 1; i <= n; i++){
        scanf("%d", &num);
        if(i == 1){
            max = num;
            min = num;
        }

        sum = sum + num;
        mean = sum / i;

        if(min > num)
            min = num;
        if(max < num)
            max = num;
    }

    printf("\nMinimum Value : %d", min);
    printf("\nMaximum Value : %d", max);
    printf("\nSum of Values : %d", sum);
    printf("\nAverage of Values : %d", mean);

}
