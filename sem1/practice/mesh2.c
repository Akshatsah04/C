#include <stdio.h>
#include <ctype.h>
#include <string.h> 

int main() {
    char str[1000];
    int freq[26] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    printf("\nLetter frequencies:\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", i + 'a', freq[i]);
        }
    }

    return 0;
}
