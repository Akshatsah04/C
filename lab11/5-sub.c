#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[100], subStr[50];
    char *ptr;

    printf("Enter the main string: ");
    scanf("%[^\n]s",mainStr);

    printf("Enter the substring to search: ");
    scanf("%s",subStr);
    ptr = strstr(mainStr, subStr);

    if (ptr != NULL) {
        printf("Substring found at position: %d\n", ptr-mainStr+1);
        printf("Pointer points to: \"%s\"\n", subStr);
    } else {
        printf("Substring not found in the main string.\n");
    }

    return 0;
}