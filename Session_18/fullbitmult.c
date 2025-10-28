#include <stdio.h>

// Function to print a 32-bit binary representation of an integer
void print_binary(int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 8 == 0 && i != 0) printf(" ");
    }
}

// Multiply two integers using bitwise operations (supports negatives)
int binary_multiply(int a, int b) {
    int result = 0;
    int negative = 0;

    // Handle sign
    if (a < 0) {
        a = -a;
        negative = !negative;
    }
    if (b < 0) {
        b = -b;
        negative = !negative;
    }

    // Perform multiplication using bitwise logic
    while (b != 0) {
        if (b & 1) {
            result += a;
        }
        a <<= 1;
        b >>= 1;
    }

    // Apply sign if needed
    return negative ? -result : result;
}

int main() {
    int a, b;

    // Input
    printf("Enter first integer (a): ");
    scanf("%d", &a);
    printf("Enter second integer (b): ");
    scanf("%d", &b);

    // Multiply
    int product = binary_multiply(a, b);

    // Output
    printf("\nBinary Multiplication (with signed integers):\n");
    printf("a = %11d\t", a); print_binary(a); printf("\n");
    printf("b = %11d\t", b); print_binary(b); printf("\n");
    printf("Product = %5d\t", product); print_binary(product); printf("\n");

    return 0;
}
