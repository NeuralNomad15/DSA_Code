#include <stdio.h>

struct Complex {
    float real;
    float imaginary;
};

int main() {
    struct Complex num1 = {3.0, 4.0}; // 3 + 4i
    struct Complex num2 = {1.5, 2.5}; // 1.5 + 2.5i

    // Adding two complex numbers
    struct Complex sum;
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;

    printf("Sum = %.2f + %.2fi\n", sum.real, sum.imaginary);

    return 0;
}