#include <stdio.h>
#include <string.h>

int main() {
    char str[100], substr[50];

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the substring to find: ");
    fgets(substr, sizeof(substr), stdin);

    // Remove newline characters if present
    str[strcspn(str, "\n")] = '\0';
    substr[strcspn(substr, "\n")] = '\0';

    // Use strstr to find substring
    char *ptr = strstr(str, substr);

    if (ptr != NULL) {
        int position = ptr - str + 1;  // +1 for 1-based index
        printf("Substring found at position: %d\n", position);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}
