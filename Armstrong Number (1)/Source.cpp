#include <stdio.h>
#include <math.h>

int main()
{
    int num, x, r, e = 0, sum = 0;

    printf("Enter number : ");
    scanf_s("%d", &num);

    x = num;
    while (x != 0)
    {
        e = e + 1;
        x = x / 10;
    }

    x = num;
    while (x > 0)
    {
        r = x % 10;
        sum = sum + pow(r, e);
        x = x / 10;
    }

    printf("sum = %d\n", sum);

    if (num == sum)
        printf("\n%d is Armstrong Number\n", num);
    else
        printf("\n%d isn't a Armstrong Number\n", num);

    return 0;
}