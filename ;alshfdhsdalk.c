#include <stdio.h>

struct point {
    int x;
    int y;
};

int multiply(int a, int b) {
    return a * b;
}

int main() {
    struct point number;
    printf("Enter a number: ");
    scanf("%d", &number.x);
    printf("Enter the second number: ");
    scanf("%d", &number.y);

    int result = multiply(number.x, number.y);
    printf("The product of %d and %d is %d\n", number.x, number.y, result);

    return 0;
}

