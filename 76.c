#include <stdio.h>

// Function to check if a number is composite
int isComposite(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int n, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (isComposite(arr[i])) {
            count++;
        }
    }

    printf("The number of composite numbers in the array is: %d", count);

    return 0;
}
