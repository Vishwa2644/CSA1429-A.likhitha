#include <stdio.h>
#include <stdbool>
#include <ctype.h>
#include <string.h>


bool isTerminal(char symbol) {
    return isalnum(symbol) || symbol == '+' || symbol == '*' || symbol == '(' || symbol == ')';
}


void computeLeadingSet(char nonTerminal, bool leadingSet[], const char grammar[][256], int numRules) {
    for (int i = 0; i < numRules; i++) {
        if (grammar[i][0] == nonTerminal) {
            for (int j = 3; grammar[i][j] != '\0'; j++) {
                if (isTerminal(grammar[i][j]) && grammar[i][j] != 'e') {
                    leadingSet[grammar[i][j]] = true;
                }
            }
        }
    }
}

int main() {
    const int MAX_RULES = 10;
    const int MAX_RULE_LENGTH = 256;
    const int MAX_NON_TERMINALS = 256;

    char grammar[MAX_RULES][MAX_RULE_LENGTH];
    int numRules;

    char nonTerminals[MAX_NON_TERMINALS];
    int numNonTerminals = 0;

    
    printf("Enter the number of grammar rules: ");
    scanf("%d", &numRules);

    printf("Enter the grammar rules (e.g., E->E+T): \n");
    for (int i = 0; i < numRules; i++) {
        scanf("%s", grammar[i]);

        char nonTerminal = grammar[i][0];
        if (isupper(nonTerminal) && !strchr(nonTerminals, nonTerminal)) {
            nonTerminals[numNonTerminals] = nonTerminal;
            numNonTerminals++;
        }
    }

    bool leadingSets[MAX_NON_TERMINALS][256];

    
    for (int i = 0; i < numNonTerminals; i++) {
        for (int j = 0; j < 256; j++) {
            leadingSets[i][j] = false;
        }
    }

    
    for (int i = 0; i < numNonTerminals; i++) {
        computeLeadingSet(nonTerminals[i], leadingSets[i], grammar, numRules);
    }
    for (int i = 0; i < numNonTerminals; i++) {
        printf("LEADING(%c): {", nonTerminals[i]);
        bool first = true;
        for (int j = 0; j < 256; j++) {
            if (leadingSets[i][j]) {
                if (!first) {
                    printf(", ");
                }
                printf("%c", j);
                first = false;
            }
        }
        printf("}\n");
    }

    return 0;
}
