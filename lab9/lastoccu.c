#include <stdio.h>

int main() {
    char str[100], ch;
    int lastIndex = -1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Input string

    printf("Enter the character to find: ");
    scanf(" %c", &ch);  // Space before %c to consume any leftover newline

    // Loop to find last occurrence
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            lastIndex = i;
        }
    }

    if (lastIndex == -1) {
        printf("Character '%c' not found in the string.\n", ch);
    } else {
        printf("Last occurrence of '%c' is at index: %d\n", ch, lastIndex);
    }

    return 0;
}
