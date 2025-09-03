#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count characters until null terminator or newline
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("Length of the string: %d\n", length);
    return 0;
}
