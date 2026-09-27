#include <stdio.h>
#include <stdlib.h>

int main()
// basic input process output.chapter 2 exercise 2.5
{

    int d1, d2, d3, product;
    //product of three digits
    printf("Enter the first digit:");
    scanf("%d", &d1);
    printf("Enter the second digit:");
    scanf("%d", &d2);
    printf("Enter the third digit:");
    scanf("%d", &d3);
     product = d1 * d2 * d3;
     printf("The product of the three digits is %d", product);

    return 0;
}
