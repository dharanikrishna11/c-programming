#include <stdio.h>

int main() {
  int arr[] = {14, 16, 87, 36, 25, 89, 34};
  int len = sizeof(arr) / sizeof(arr[0]);
  int m = 1; // Mth maximum number
  int n = 3; // Nth minimum number

  // Sort the array in ascending order
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }

  // Find the Mth maximum number
  int mth_max = arr[len - m];

  // Find the Nth minimum number
  int nth_min = arr[n - 1];

  // Find the sum and difference of them
  int sum = mth_max + nth_min;
  int diff = mth_max - nth_min;

  // Print the results
  printf("Mth maximum number: %d\n", mth_max);
  printf("Nth minimum number: %d\n", nth_min);
  printf("Sum: %d\n", sum);
  printf("Difference: %d\n", diff);

  return 0;
}
