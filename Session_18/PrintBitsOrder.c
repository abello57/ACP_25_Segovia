# include <stdio.h>
void print_bits(unsigned char byte) {
	for (int i = 7; i >= 0; i--) {
		printf("%d", (byte >> i) & 1);
	}
	printf("\n");
}
int main() {
	unsigned char byte = 0b00000101; // 5 in decimal
	printf("Byte: ");
	print_bits(byte);
	return 0;
}