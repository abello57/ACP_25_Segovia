#include <stdio.h>

// Swap functions that swaps
// two values
void swapx(int x, int y) {
    int t;
    t = x;
    x = y;
    y = t;

    printf("Inside swapx: x = %d y = %d\n", x, y);
}

// Main function
int main() {
    int a = 10, b = 20;

    // Pass by Values
    swapx(a, b);
    printf("Inside main: a = %d b = %d", a, b);
    return 0;
}

