# include <stdio.h>
int count_set_bits(unsigned int num) {
	int count = 0;
	while (num) {
		count += num & 1; // Increment count if the least significant bit is 1
		num >>= 1; // Right shift to check the next bit
	}
	return count;
}
int main() {
	unsigned int number = 29; // Binary: 11101
	printf("Number of set bits in %u is %d\n", number, count_set_bits(number));
	return 0;
}