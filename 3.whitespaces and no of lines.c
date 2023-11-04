#include <stdio.h>

int main() {
    char ch;
    int spaceCount = 0;
    int lineCount = 0;
    int previousChar = '\n';  

    printf("Enter the text \n");

    while ((ch = getchar()) != EOF) {
        if (ch == ' ') {
            spaceCount++;
        } else if (ch == '\n') {
            lineCount++;
        }
        
        previousChar = ch;
    }

    
    if (previousChar != '\n') {
        lineCount++;
    }

    printf("Spaces: %d\n", spaceCount);
    printf("Lines: %d\n", lineCount);

    return 0;
}
