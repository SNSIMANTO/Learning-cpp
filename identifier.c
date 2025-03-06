#include <stdio.h>
#include <string.h>
#include <ctype.h>
const char *keywords[] = {"auto","break",
        "case","char", "continue","do",
        "default","const","double","else",
        "enum","extern","for","if",
        "goto","float","int","long",
        "register","return","signed",
        "static","sizeof","short",
        "struct","switch","typedef",
        "union","void","while",
        "volatile","unsigned"
    };
int isValidKeywords(const char *str){
    int size = sizeof(keywords)/sizeof(keywords[0]);
    for(int i = 0; i < size; i++){
        if(strcmp(str, keywords[i]) == 0){
            return 1;
        }
    }
    return 0;
}

int isValidIdentifier(const char *str){
    if(str[0] == '\0')
        return 0;
    if(!isalpha(str[0]) && str[0] != '_')
        return 0;
    for(int i = 1; str[i] != '\0'; i++){
        if(!isalnum(str[i]) && str[i] != '_')
            return 0;
    }
    return 1;
}

void identifyOperatorSeparator(char chr)
{
    switch(chr){
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
            printf("%c is an arithmetic operator\n", chr);
            break;
        case '&':
        case '|':
        case '^':
        case '~':
            printf("%c is a bitwise operator.\n", chr);
            break;
        case '=':
        case '<':
        case '>':
        case '!':
            printf("%c is a relational or assignment operator.\n", chr);
            break;
        case ';':
        case ',':
        case '.':
        case ':':
        case '(':
        case ')':
        case '[':
        case ']':
        case '{':
        case '}':
            printf("%c is a separator\n", chr);
            break;
        default:
            printf("%c is not a recognized operator.\n", chr);
    }
}

int main()
{
    char code[1000]; // Buffer for multiple lines

    // Read multiple lines of input
    int index = 0;
    while (fgets(code + index, sizeof(code) - index, stdin) != NULL)
    {
        index += strlen(code + index);
    }

    char *token = code;

    while (*token)
    {
        // Handle single-line comments
        if (*token == '/' && *(token + 1) == '/')
        {
            while (*token && *token != '\n')
            {
                printf("%c", *token);
                token++;
            }
            printf("\n"); // New line after single-line comment
            printf("\t Single line comments \n");

        }
        // Handle multi-line comments
        else if (*token == '/' && *(token + 1) == '*')
        {
            while (*token && !(*token == '*' && *(token + 1) == '/'))
            {
                if (*token == '*' && *(token + 1) == '/')
                {

                    printf("%c", *token);
                    token++;
                } else {
                    printf("%c", *token);
                    token++;
                }

            }
            if(!*token){
                printf("\t Invalid multi-line comments \n");
            }
            if (*token)
            {
                printf("*/\n"); // Print closing */
                token += 2; // Move past */
                printf("\t Multi-line comments \n");
            }
        }
        // Handle normal words and symbols
        else if (isalnum(*token) || *token == '_')
        {
            char buffer[100]; // Temporary storage for words
            int bufIndex = 0;

            while (isalnum(*token) || *token == '_') // Extract a full word
            {
                buffer[bufIndex++] = *token;
                token++;
            }
            buffer[bufIndex] = '\0'; // Null-terminate the word

            if (isValidKeywords(buffer)) // Check if it's a keyword
            {
                printf("%s is a keyword\n", buffer);
            }
            else if (isValidIdentifier(buffer)) // Check if it's a valid identifier
            {
                printf("%s is a valid identifier\n", buffer);
            }
            else
            {
                printf("%s is an invalid identifier\n", buffer);
            }
        }
        else
        {
            // Print symbols separately (excluding spaces)
            if (!isspace(*token))
            {
                identifyOperatorSeparator(*token);
            }
            token++;
        }
    }

    return 0;
}


