
#include <stdio.h>
#include <string.h>

void ch(char str[]) {
    int len = strlen(str);
    int i, flag = 1; // Initialize flag to 1

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0; // Set flag to 0 if characters don't match
            break;    // Break out of the loop since it's not a palindrome
        }
    }

    if (flag) {
        printf("Palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); // Note: gets() is not recommended due to security issues

    ch(str);

    return 0;
}
