#include <stdio.h>
#include <string.h>



int equals(char *a, char *b) {
    int i = 0;
    while (a[i] && b[i]) {
        if (a[i] != b[i])
            return 0;
        i++;
    }
    return a[i] == b[i];
}

int main() {
    char phrases[10][200] = {
        "Bonjour, comment ca va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journee.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent etre deroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est interessante.",
        "Les structures de donnees sont importantes.",
        "Programmer en C, c'est genial."
    };

    char recherche[200];

    for (int i = 0; i < 10; i++)
        printf("%s\n", phrases[i]);
    
    printf("Entrez la phrase a chercher : ");
    fgets(recherche, 200, stdin);

    int found = 0;
    for (int i = 0; i < 10; i++)
        if (equals(phrases[i], recherche))
            found = 1;

    if (found)
        printf("Phrase trouvee\n");
    else
        printf("Phrase non trouvee\n");

    return 0;
}
