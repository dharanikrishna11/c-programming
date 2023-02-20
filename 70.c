#include <stdio.h>

struct complex {
    float real;
    float imaginary;
};

struct complex add(struct complex a, struct complex b);

int main() {
    struct complex num1, num2, sum;

    printf("Enter First complex number:\n");
    printf("Enter real part of complex number: ");
    scanf("%f", &num1.real);
    printf("Enter imaginary part of complex number: ");
    scanf("%f", &num1.imaginary);

    printf("\nEnter Second complex number:\n");
    printf("Enter real part of complex number: ");
    scanf("%f", &num2.real);
    printf("Enter imaginary part of complex number: ");
    scanf("%f", &num2.imaginary);

    sum = add(num1, num2);

    printf("\nSum = %.2f + %.2fi\n", sum.real, sum.imaginary);

    return 0;
}

struct complex add(struct complex a, struct complex b) {
    struct complex result;

    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;

    return result;
}
