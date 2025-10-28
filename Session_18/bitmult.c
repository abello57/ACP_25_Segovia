#include <stdio.h>

// Function to multiply two integers using bitwise operations
int binary_multiply(int a, int b) {
    int result = 0;     // This will store the final result
    int shift = 0;      // Keeps track of the bit position

    // Loop until all bits of b are processed
    while (b != 0) {
        // If the least significant bit of b is 1, add (a << shift) to result
        if (b & 1) {
            result += a << shift;
        }

        // Move to the next bit
        shift++;
        b >>= 1; // Right shift b to process the next bit
    }

    return result;
}

// Function to print an integer in binary (32 bits)
void print_binary(int n) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
        if (i % 8 == 0 && i != 0) printf(" ");
    }
}

int main() {
    int a, b;

    // Input
    printf("Enter first integer (a): ");
    scanf("%d", &a);
    printf("Enter second integer (b): ");
    scanf("%d", &b);

    // Perform multiplication
    int product = binary_multiply(a, b);

    // Output
    printf("\nBinary Multiplication:\n");
    printf("a = %11d\t", a); print_binary(a); printf("\n");
    printf("b = %11d\t", b); print_binary(b); printf("\n");
    printf("Product = %5d\t", product); print_binary(product); printf("\n");

    return 0;
}