#include <stdio.h>
#include <string.h>

int main() {
    char s[100];/
    printf("Enter the statement:\n ");
    fgets(s, sizeof(s), stdin);
    if (strncmp(s, "//", 2) == 0) {
        printf("This line is a single-line comment\n");
    } else if (strncmp(s, "/*", 2) == 0) {
        printf("This line is a multi-line comment\n");
    } else {
        printf("This line is not a comment\n");
    }

    return 0;
}
