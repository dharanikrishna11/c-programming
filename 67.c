#include <stdio.h>

// Define the structure for a complex number
struct complex {
    float real;
    float imag;
};

// Function to subtract two complex numbers
struct complex subtract(struct complex num1, struct complex num2) {
    struct complex result;
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;
    return result;
}

int main() {
    struct complex num1, num2, result;

    // Get the values for the first complex number
    printf("Enter First complex number:\n");
    printf("Enter the real part of complex number: ");
    scanf("%f", &num1.real);
    printf("Enter the imaginary part of complex number: ");
    scanf("%f", &num1.imag);

    // Get the values for the second complex number
    printf("Enter Second complex number:\n");
    printf("Enter the real part of complex number: ");
    scanf("%f", &num2.real);
    printf("Enter the imaginary part of complex number: ");
    scanf("%f", &num2.imag);

    // Perform the subtraction of the two complex numbers
    result = subtract(num1, num2);

    // Display the result
    printf("Result: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
