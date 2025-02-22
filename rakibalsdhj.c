#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char string[MAX_LENGTH];
    char substring[MAX_LENGTH];

    printf("Enter a string: ");
    scanf("%s", string);

    printf("Enter the substring to check: ");
    scanf("%s", substring);

    int stringLength = strlen(string);
    int substringLength = strlen(substring);

    int found = 0; // Use 0 for false and 1 for true

    for (int i = 0; i <= stringLength ; i++) {
        int j;
        for (j = 0; j < substringLength; j++) {
            if (string[ i+j] != substring[j])
                break;
        }
        if (j == substringLength) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Substring found.\n");
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}


