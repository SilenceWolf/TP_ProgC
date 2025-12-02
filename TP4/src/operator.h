void exercice_4_1() {
    int num1, num2;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);
    printf("Entrez num2 : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op); // Note l'espace avant %c pour ignorer les '\n'

    int resultat;

    switch(op) {
        case '+': resultat = somme(num1, num2); break;
        case '-': resultat = difference(num1, num2); break;
        case '*': resultat = produit(num1, num2); break;
        case '/': resultat = quotient(num1, num2); break;
        case '%': resultat = modulo(num1, num2); break;
        case '&': resultat = et(num1, num2); break;
        case '|': resultat = ou(num1, num2); break;
        case '~': resultat = negation(num1); break; // on ignore num2
        default:
            printf("Opérateur invalide.\n");
            return;
    }

    printf("Résultat : %d\n", resultat);
}
