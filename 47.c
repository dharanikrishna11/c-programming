#include <stdio.h>

int main() {
    int size_a, size_b, size_c, i, j;
    printf("Enter number of elements in array A: ");
    scanf("%d", &size_a);
    int a[size_a];
    printf("Enter %d elements for array A: ", size_a);
    for (i = 0; i < size_a; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter number of elements in array B: ");
    scanf("%d", &size_b);
    int b[size_b];
    printf("Enter %d elements for array B: ", size_b);
    for (i = 0; i < size_b; i++) {
        scanf("%d", &b[i]);
    }
    size_c = size_a + size_b;
    int c[size_c];
    for (i = 0; i < size_a; i++) {
        c[i] = a[i];
    }
    for (j = 0; j < size_b; j++) {
        c[i] = b[j];
        i++;
    }
    printf("Merged array is: ");
    for (i = 0; i < size_c; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}
