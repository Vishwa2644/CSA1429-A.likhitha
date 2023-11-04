#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isLeftFactoring(char productions[][100], int numProductions) {
    for (int i = 0; i < numProductions; i++) {
        char* currentProduction = productions[i];
        for (int j = i + 1; j < numProductions; j++) {
            char* nextProduction = productions[j];
            int commonPrefixLength = 0;
            while (currentProduction[commonPrefixLength] != '\0' &&
                   currentProduction[commonPrefixLength] == nextProduction[commonPrefixLength]) {
                commonPrefixLength++;
            }
            if (commonPrefixLength > 0) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    int numProductions;
    
    printf("Enter the number of productions: ");
    scanf("%d", &numProductions);
    while (getchar() != '\n');

    char productions[numProductions][100];
    
    for (int i = 0; i < numProductions; i++) {
        printf("Enter production %d: ", i + 1);
        fgets(productions[i], sizeof(productions[i]), stdin);
        productions[i][strcspn(productions[i], "\n")] = '\0'; 
    }
    if (isLeftFactoring(productions, numProductions)) {
        printf("Left Factoring is present in the grammar.\n");
    } else {
        printf("Left Factoring is not present in the grammar.\n");
    }

    return 0;
}
