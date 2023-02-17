#include <stdio.h>

int isPrime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N, count = 0, num = 2;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("First %d prime numbers are:\n", N);
    while (count < N) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");
    printf("The %dth prime number is: ", N);
    count = 0;
    num = 2;
    while (count < N) {
        if (isPrime(num)) {
            count++;
        }
        if (count == N) {
            printf("%d\n", num);
        }
        num++;
    }
    return 0;
}
