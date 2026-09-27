#include <stdio.h>
#include <stdlib.h>

int main()
{
    // sum and average of integers
    //chapter 4, exercise 4.9

int n, number, sum = 0;
    float average;
    printf("Enter number of integers:");
    scanf("%d", &n);

    for (int i ; i <= n; i++)
    {
        printf("Enter the integers:");
        scanf("%d", &number);
        sum = sum + number;
    }

    average = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);


    return 0;
}
