#include <stdio.h>

// Function to print a 32-bit binary representation of an integer
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

    printf("\n=== Bitwise Operations ===\n");

    // AND
    printf("\nAND (a & b)\n");
    printf("a = %11d\t", a); print_binary(a); printf("\n");
    printf("b = %11d\t", b); print_binary(b); printf("\n");
    printf("Result = %5d\t", a & b); print_binary(a & b); printf("\n");

    // OR
    printf("\nOR (a | b)\n");
    printf("a = %11d\t", a); print_binary(a); printf("\n");
    printf("b = %11d\t", b); print_binary(b); printf("\n");
    printf("Result = %5d\t", a | b); print_binary(a | b); printf("\n");

    // XOR
    printf("\nXOR (a ^ b)\n");
    printf("a = %11d\t", a); print_binary(a); printf("\n");
    printf("b = %11d\t", b); print_binary(b); printf("\n");
    printf("Result = %5d\t", a ^ b); print_binary(a ^ b); printf("\n");

    // NOT
    printf("\nNOT (~a)\n");
    printf("a = %11d\t", a); print_binary(a); printf("\n");
    printf("Result = %5d\t", ~a); print_binary(~a); printf("\n");

    printf("\nNOT (~b)\n");
    printf("b = %11d\t", b); print_binary(b); printf("\n");
    printf("Result = %5d\t", ~b); print_binary(~b); printf("\n");

    // SHIFT LEFT a by 1 and b by 2
    printf("\nSHIFT LEFT (a << 1)\n");
    printf("a = %11d\t", a); print_binary(a); printf("\n");
    printf("Result = %5d\t", a << 1); print_binary(a << 1); printf("\n");

    printf("\nSHIFT LEFT (b << 2)\n");
    printf("b = %11d\t", b); print_binary(b); printf("\n");
    printf("Result = %5d\t", b << 2); print_binary(b << 2); printf("\n");

    // SHIFT RIGHT a by 1 and b by 2
    printf("\nSHIFT RIGHT (a >> 1)\n");
    printf("a = %11d\t", a); print_binary(a); printf("\n");
    printf("Result = %5d\t", a >> 1); print_binary(a >> 1); printf("\n");

    printf("\nSHIFT RIGHT (b >> 2)\n");
    printf("b = %11d\t", b); print_binary(b); printf("\n");
    printf("Result = %5d\t", b >> 2); print_binary(b >> 2); printf("\n");

    // TWO'S COMPLEMENT
    printf("\nTWO'S COMPLEMENT of a (-a)\n");
    printf("a = %11d\t", a); print_binary(a); printf("\n");
    printf("-a = %11d\t", -a); print_binary(-a); printf("\n");

    printf("\nTWO'S COMPLEMENT of b (-b)\n");
    printf("b = %11d\t", b); print_binary(b); printf("\n");
    printf("-b = %11d\t", -b); print_binary(-b); printf("\n");

    return 0;
}