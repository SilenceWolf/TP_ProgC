#include <stdio.h>
#include <string.h>



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

    char input[200];

    for (int i = 0; i < 10; i++)
        printf("%s\n", phrases[i]);
    
    printf("Entrez la phrase : ");
    fgets(input, sizeof(input), stdin);

    int len = strlen(input);
    if(input[len-1] == '\n')
        input[len-1] = '\0';

    int trouve = 0;
    for(int i=0;i<10;i++){
        int j=0;
        while(input[j] == phrases[i][j] && input[j] != '\0')
            j++;
        if(input[j] == '\0' && phrases[i][j] == '\0'){
            trouve = 1;
            break;
        }
    }

    if(trouve)
        printf("Phrase trouvée\n");
    else
        printf("Phrase non trouvée\n");

    return 0;
}
