#include <stdio.h>
#include <ctype.h>

int main() {
    char equation[100];
    int i = 0;
    scanf("%s", equation);  
    printf("Tokens\n");
    while (equation[i] != '\0') {
        if (isdigit(equation[i])) {
            printf("Number: ");
            while (isdigit(equation[i])) {
                printf("%c", equation[i]);
                i++;
            }
            printf("\n");
        } 
        else {
            printf("Operator: %c\n", equation[i]);
            i++;
        }
    }

    return 0;
}