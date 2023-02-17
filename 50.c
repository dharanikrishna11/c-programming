#include <stdio.h>

void decToBinary(int n);

int main()
{
    int num;

    printf("Input any decimal number: ");
    scanf("%d", &num);

    printf("The binary value is: ");
    decToBinary(num);

    return 0;
}

void decToBinary(int n)
{
    int binary[32];
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}
