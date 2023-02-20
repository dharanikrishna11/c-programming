#include <stdio.h>

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    int square = num * num;
    int cube = num * num * num;
    printf("Square of %d is %d\n", num, square);
    printf("Cube of %d is %d\n", num, cube);
    return 0;
}
