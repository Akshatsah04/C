#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // Read full line including spaces
    str[strcspn(str, "\n")] = '\0';  // Remove newline character

    // Tokenize the string using space as delimiter
    char *token = strtok(str, " ");

    while (token != NULL) {
        words++;
        token = strtok(NULL, " ");
    }

    printf("Total number of words: %d\n", words);

    return 0;
}
