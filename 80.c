#include <stdio.h>

void find_max(int *num1, int *num2);

int main() {
    int num1, num2;
    printf("Input the first number : ");
    scanf("%d", &num1);
    printf("Input the second number : ");
    scanf("%d", &num2);
    find_max(&num1, &num2);
    printf("The maximum number is %d\n", num1);
    return 0;
}

void find_max(int *num1, int *num2) {
    if (*num2 > *num1) {
        *num1 = *num2;
    }
}
