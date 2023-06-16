#include <stdio.h>

void print_bits(int num) {
    int i;
    unsigned int mask = 1 << 31;  // Start with the leftmost bit

    for (i = 0; i < 32; i++) {
        // Use bitwise AND to check if the bit is set
        int bit = (num & mask) ? 1 : 0;
        printf("%d", bit);

        // Shift the mask one bit to the right
        mask >>= 1;
    }
    printf("\n");
}

int main() {
    int num;
    printf("Enter a 32-bit unsigned integer(Maximum value = 4,294,967,295): ");
    scanf("%d", &num);
    printf("Bits representation: ");
    print_bits(num);
    return 0;
}