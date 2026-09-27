#include <stdio.h>
#include <stdlib.h>

int main()
{
    //calculating sales
    //chapter 4 exercise 4.19
    int choice, quantity;
    float retail_Price, total;
    printf("=======MENU=======\n");
    printf("      1. $2.98\n");
    printf("      2. $4.50\n");
    printf("      3. $9.98\n");
    printf("      4. $4.49\n");
    printf("      5. $6.87\n");

    printf("Enter product number(1-5):");
    scanf("%d", &choice);



    switch(choice)
    {
    case 1:
        retail_Price =  2.98;
        break;
    case 2:
        retail_Price = 4.50;
        break;
    case 3:
        retail_Price = 9.98;
        break;
    case 4:
        retail_Price = 4.49;
        break;
    case 5:
        retail_Price = 6.87;
        break;
    default:
        printf("Invalid product number input\n");
        return 0;
    }
    printf("Enter the quantity sold:");
    scanf("%d", &quantity);
    total = (float)(choice * retail_Price);
    printf("Retail price:%.2f\n", retail_Price);
    printf("Quantity sold: %d\n", quantity);
    printf("Total retail value:$%.2f\n", total);

    return 0;
}
