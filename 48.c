#include <stdio.h>

int main() {
    int N, arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    printf("Enter %d elements: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int largest1 = arr[0];
    int largest2 = arr[1];
    if (largest2 > largest1) {
        int temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }

    for (int i = 2; i < N; i++) {
        if (arr[i] > largest1) {
            largest2 = largest1;
            largest1 = arr[i];
        } else if (arr[i] > largest2) {
            largest2 = arr[i];
        }
    }

    printf("The largest element is %d\n", largest1);
    printf("The second largest element is %d\n", largest2);

    return 0;
}
