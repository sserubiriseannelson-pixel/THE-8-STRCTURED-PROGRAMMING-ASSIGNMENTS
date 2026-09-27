#include <stdio.h>
#include <stdlib.h>

int main()
{
    //checking for a prime number
    //chapter 3 exercise 3.22
    int num, i;

    printf("Input number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("The number is not a prime number\n");
    }
    else
    {
        for (i=2;i<num; i++)
        {
            if (num%i==0)
            {
                printf("the number is not a prime number\n");
                return 0;
            }
        }
        printf("The number is a prime number");
    }


    return 0;
}
