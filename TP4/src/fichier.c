#include <stdio.h>
#include <string.h>

void exercice_4_2() {
    int choix;
    char nom_de_fichier[100];
    char message[256];

    printf("Exercice 4.2 : Gestion de fichiers\n");
    printf("Que souhaitez-vous faire ?\n1. Lire un fichier\n2. Écrire dans un fichier\nVotre choix : ");
    scanf("%d", &choix);

    if(choix == 1) {
        printf("Entrez le nom du fichier à lire : ");
        scanf("%s", nom_de_fichier);
        lire_fichier(nom_de_fichier);
    } else if(choix == 2) {
        printf("Entrez le nom du fichier dans lequel vous souhaitez écrire : ");
        scanf("%s", nom_de_fichier);
        printf("Entrez le message à écrire : ");
        getchar(); // Pour consommer le \n laissé par scanf
        fgets(message, sizeof(message), stdin);
        ecrire_dans_fichier(nom_de_fichier, message);
    } else {
        printf("Choix invalide.\n");
    }
}

