#include <stdio.h>
#include <string.h>

int main() {
    int num1 = 20;
    int num2 = 6;
    char op = '&';  // change selon vos tests

    int resultat;

    switch (op) {
        case '+':
            resultat = num1 + num2;
            break;
        case '-':
            resultat = num1 - num2;
            break;
        case '*':
            resultat = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                resultat = num1 / num2;
            else {
                printf("Erreur : division par 0\n");
                return 1;
            }
            break;
        case '%':
            resultat = num1 % num2;
            break;
        case '&':
            resultat = num1 & num2;
            break;
        case '|':
            resultat = num1 | num2;
            break;
        case '~':
            resultat = ~num1;
            break;
        default:
            printf("Operateur invalide.\n");
            return 1;
    }

    printf("Résultat = %d\n", resultat);
    return 0;
}

