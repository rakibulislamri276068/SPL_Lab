
#include <stdio.h>
#include <ctype.h> // Include this header for the toupper() function

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str); // Use fgets instead of gets to avoid buffer overflow issues

    int i, vowel = 0, word = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (toupper(str[i]) == 'A' ||
            toupper(str[i]) == 'E' ||
            toupper(str[i]) == 'I' ||
            toupper(str[i]) == 'O' ||
            toupper(str[i]) == 'U') {
            vowel++;
        }

        if (str[i] == ' ') {
            word++;
        }
    }
    // Check if the last word is not followed by a space
    if (str[i - 1] != ' ') {
        word++;
    }

    printf("Number of vowels: %d\nNumber of words: %d\n", vowel, word);

    return 0;
}
