#include <stdio.h>
typedef enum {
	CIRCLE = 0,
	LINE = 1,
	TRIANGLE = 3,
	SQUARE, // 4
	PENTAGON // 5
} Shape;
int main() {
	printf("Number of sides in a triangle: %d\n", TRIANGLE);
	printf("Number of sides in a square: %d\n", SQUARE);
	printf("Number of sides in a pentagon: %d\n", PENTAGON);
	return 0;
}
