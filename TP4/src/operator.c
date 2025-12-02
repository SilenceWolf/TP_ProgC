void exercice_4_1() {
    int num1, num2;
    char op;

    printf("Exercice 4.1 : Calcul avec opérateurs\n");
    printf("Entrez num1 : ");
    scanf("%d", &num1);
    printf("Entrez num2 : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %, &, |, ~) : ");
    scanf(" %c", &op);

    switch(op) {
        case '+': printf("Résultat : %d\n", somme(num1, num2)); break;
        case '-': printf("Résultat : %d\n", difference(num1, num2)); break;
        case '*': printf("Résultat : %d\n", produit(num1, num2)); break;
        case '/': printf("Résultat : %d\n", quotient(num1, num2)); break;
        case '%': printf("Résultat : %d\n", modulo(num1, num2)); break;
        case '&': printf("Résultat : %d\n", et(num1, num2)); break;
        case '|': printf("Résultat : %d\n", ou(num1, num2)); break;
        case '~': printf("Résultat : %d\n", negation(num1)); break;
        default: printf("Opérateur invalide\n"); break;
    }
}
