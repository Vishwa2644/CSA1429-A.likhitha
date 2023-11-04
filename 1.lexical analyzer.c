#include <stdio.h>
#include <ctype.h>

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int main() {
    char input[1000];
    printf("Enter a C code snippet: ");
    fgets(input, sizeof(input), stdin);
    for (int i = 0; input[i] != '\0';) {
        if (isalpha(input[i]) || input[i] == '_') {
            printf("Identifier: ");
            while (isalnum(input[i]) || input[i] == '_')
                putchar(input[i++]);
            putchar('\n');
        } else if (isdigit(input[i])) {
            printf("Constant: ");
            while (isdigit(input[i]))
                putchar(input[i++]);
            putchar('\n');
        } else if (isOperator(input[i]))
            printf("Operator: %c\n", input[i++]);
        else
            i++;
    }
    return 0;
}
