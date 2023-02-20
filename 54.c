#include <stdio.h>

int isPerfect(int num)
{
    int i, sum = 0;
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}

int main()
{
    int low, high, i;
    printf("Enter the lowest and highest search limits of perfect numbers: ");
    scanf("%d %d", &low, &high);

    printf("Perfect numbers between %d and %d are: ", low, high);
    for (i = low; i <= high; i++)
    {
        if (isPerfect(i))
            printf("%d ", i);
    }

    return 0;
}
