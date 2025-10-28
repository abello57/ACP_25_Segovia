#include <stdio.h>
typedef enum {
	CIRCLE,
	LINE,
	TRIANGLE,
	SQUARE
} Shape;
int main() {
	Shape s = TRIANGLE;
	printf("Shape value: %d\n", s); // Output: Shape value: 2
	printf("Next shape value: %d\n", s + 1); // Output: Next shape value: 3
	return 0;
}