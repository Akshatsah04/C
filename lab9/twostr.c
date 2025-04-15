#include <stdio.h>
#include <string.h>  // Required for string functions

int main() {
    char str1[100], str2[100], copyStr[100];

    // Input strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline character

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline character

    // 1. Concatenate str2 to str1
    strcat(str1, str2);
    printf("\nConcatenated String: %s\n", str1);

    // 2. Find length of both strings
    printf("Length of first string: %lu\n", strlen(str1));
    printf("Length of second string: %lu\n", strlen(str2));

    // 3. Copy str2 into copyStr
    strcpy(copyStr, str2);
    printf("Copied String (from str2): %s\n", copyStr);

    return 0;
}
