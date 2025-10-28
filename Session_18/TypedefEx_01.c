# include <stdio.h>
typedef enum {
	RED,
	GREEN,
	BLUE
} Color;
void printColor(Color color) {
	switch (color) {
	case RED:
		printf("Color is Red\n");
		break;
	case GREEN:
		printf("Color is Green\n");
		break;
	case BLUE:
		printf("Color is Blue\n");
		break;
	default:
		printf("Unknown color\n");
		break;
	}
}
int main() {
	Color myColor = GREEN;
	printColor(myColor);
	return 0;
}