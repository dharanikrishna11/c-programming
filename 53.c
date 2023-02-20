#include <stdio.h>

int isPrime(int num)
{
    int i;
    if (num <= 1)
        return 0;
    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);

    return 0;
}
