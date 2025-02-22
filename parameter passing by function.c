#include <stdio.h>

int function(int *p, int n) {
    int i, min = p[0];
    for (i = 1; i < n; i++) {
        if (min > p[i]) {
            min = p[i];
        }
    }
    return min;
}

int main() {
    int ara[100], a = 5, i, m;
    printf("Enter 5 numbers: ");

    for (i = 0; i < a; i++) {
        scanf("%d", &ara[i]);
    }

    int *p = ara; // Pointer to the first element of the array
    m = function(p, a); // Pass pointer to the function
    printf("Min is %d", m);

    return 0;
}


