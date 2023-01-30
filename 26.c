#include <stdio.h>

int largest(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Input element %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("The largest element in the array is : %d", largest(arr, n));
    return 0;
}
