
#include <stdio.h>

int function(int arr[], int n) {
    int i, min = arr[0];
    for (i = 1; i < n; i++) { // Start from index 1, not 0
        if (min > arr[i]) {
            min = arr[i];
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
    m = function(ara, a); // Pass array and size to the function
    printf("Min is %d", m);

    return 0; // Added return statement
}
