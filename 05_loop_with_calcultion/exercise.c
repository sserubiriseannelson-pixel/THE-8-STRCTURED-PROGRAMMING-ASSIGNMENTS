#include <stdio.h>
#include <stdlib.h>

int main()
{

    int sum = 0;

    for (int i = 7; i <= 100; i += 7) {
        sum += i;
    }

    printf("The sum of all multiples of 7 from 7 to 100 is %d", sum);

     return 0;
}
