#include<stdio.h>
#include<math.h>

int main()
{
    int mean, sum = 0;
    int n, num, SD;

    printf("\n\nEnter the Number of Element : ");
    scanf("%d", &n);

    printf("\nEnter the Values : ");
    for(int i = 1; i <= n; i++){
        scanf("%d", &num);
        
        sum = sum + num;
        mean = sum / i;
    }

}
