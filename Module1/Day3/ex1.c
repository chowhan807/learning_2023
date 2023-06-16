#include <stdio.h>

void print_numbersfront(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void print_numbersback(int n){
    int i;
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
}



void print_spaces(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}

void print_pattern(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        print_numbersfront(i);
        print_spaces(2 * (n - i));
        print_numbersback(i);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter a number(Less than 10): ");
    scanf("%d", &n);
    print_pattern(n);
    return 0;
}