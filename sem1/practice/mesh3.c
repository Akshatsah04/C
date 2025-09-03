#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], sub[1000];
    int count = 0;

    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; 
    

    printf("Enter the substring: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';

    int len_str = strlen(str);
    int len_sub = strlen(sub);

    printf("\nSubstring found at positions: ");
    
    for (int i = 0; i <= len_str - len_sub; i++) {
        if (strncmp(&str[i], sub, len_sub) == 0) {
            printf("%d ", i);
            count++;
        }
    }

    if (count > 0) {
        printf("\nTotal occurrences: %d\n", count);
    } else {
        printf("\nSubstring not found.\n");
    }

    return 0;
}
