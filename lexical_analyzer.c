#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

// List of keywords
char *keywords[] = {"if", "else", "while", "for", "int", "return", "void", NULL};

// Function to check if a word is a keyword
int isKeyword(char *word) {
    for (int i = 0; keywords[i] != NULL; i++) {
        if (strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

// Function to check if a character is an operator
int isOperator(char ch) {
    char operators[] = "+-*/=%";
    for (int i = 0; i < strlen(operators); i++) {
        if (ch == operators[i])
            return 1;
    }
    return 0;
}

int main() {
    FILE *fp = fopen("input.txt", "r");  // Input file with sample code
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char ch;
    char word[MAX];
    int index = 0;

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {  // Start of a word (identifier or keyword)
            word[index++] = ch;
            while ((ch = fgetc(fp)) != EOF && (isalnum(ch) || ch == '_')) {
                word[index++] = ch;
            }
            word[index] = '\0';  // End of the word

            // Check if keyword or identifier
            if (isKeyword(word))
                printf("Keyword: %s\n", word);
            else
                printf("Identifier: %s\n", word);

            index = 0;
            if (ch == EOF) break;
            // If ch is not part of the word, process it in next iteration
            if (isOperator(ch)) {
                printf("Operator: %c\n", ch);
            }
        }
        else if (isOperator(ch)) {
            printf("Operator: %c\n", ch);
        }
        // Ignore other characters (spaces, newlines, punctuation, etc.)
    }

    fclose(fp);
    return 0;
}
