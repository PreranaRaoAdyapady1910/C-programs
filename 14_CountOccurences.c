#include <stdio.h>
int main()
{
    int number;
    int digitToCount;
    int remainder;
    int count = 0;

    printf("Enter the number:");
    scanf("%d", &number);

    printf("Enter the digit to count:");
    scanf("%d", &digitToCount);

    while (number != 0)
    {
        remainder = number % 10;
        if (remainder == digitToCount)
        {
            count++;
        }
        number = number / 10;
    }
    printf("%d occurs %d times", digitToCount, count);
}