#include <stdio.h>

void findSmallestLargestDigits(int num) {
    int smallestDigit = 9;
    int largestDigit = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit < smallestDigit) {
            smallestDigit = digit;
        }
        if (digit > largestDigit) {
            largestDigit = digit;
        }
        num /= 10;
    }

    printf("Smallest digit: %d\n", smallestDigit);
    printf("Largest digit: %d\n", largestDigit);
}

int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    findSmallestLargestDigits(number);
    return 0;
}