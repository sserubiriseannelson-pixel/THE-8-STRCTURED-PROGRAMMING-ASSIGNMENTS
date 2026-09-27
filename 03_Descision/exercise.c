#include <stdio.h>
#include <stdlib.h>

int main()
// checking odd or even numbers chapter 2 exercise 2.22
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num%2==0)
    {
        printf("The number entered is an even number\n");

    }
    else if (num%2==1)
    {
        printf("The number entered is odd\n");
    }
    else
    {
        printf("The number entered is neither an odd even number\n");
    }
    return 0;
}
