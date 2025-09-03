#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // Reads the input including spaces
    str[strcspn(str, "\n")] = '\0';  // Removes the newline character

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // Convert to uppercase
        }
    }

    printf("Uppercase sentence: %s\n", str);

    return 0;
}
