#include <stdio.h>

// This is a static inline function that returns the square of an integer
static inline int square(int x) {
    return x * x;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print the square using the static inline function
    printf("Square of %d is: %d\n", num, square(num));

    return 0;
}
