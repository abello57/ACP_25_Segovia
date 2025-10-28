#include <stdio.h>
typedef int (*Operation)(int, int);
int add(int a, int b) {
	return a + b;
}
int multiply(int a, int b) {
	return a * b;
}
int execute(Operation op, int a, int b) {
	return op(a, b);
}
int main() {
	int sum = execute(add, 5, 3);
	int product = execute(multiply, 5, 3);
	printf("Sum: %d\n", sum); // Output: Sum: 8
	printf("Product: %d\n", product); // Output: Product: 15
	return 0;
}