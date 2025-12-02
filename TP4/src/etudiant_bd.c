#include <stdio.h>
#include <string.h>
#include "fichier.h"  // fonctions lire_fichier et ecrire_dans_fichier

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

int main() {
    struct Etudiant e[5];
    char buffer[256];

    for (int i = 0; i < 5; i++) {
        printf("Entrez les détails de l'étudiant.e %d :\n", i + 1);

        printf("Nom : ");
        scanf("%s", e[i].nom);

        printf("Prénom : ");
        scanf("%s", e[i].prenom);

        printf("Adresse : ");
        scanf(" %[^\n]", e[i].adresse); // permet de lire une ligne complète avec espaces

        printf("Note 1 : ");
        scanf("%f", &e[i].note1);

        printf("Note 2 : ");
        scanf("%f", &e[i].note2);

        // Formater la ligne à écrire dans le fichier
        sprintf(buffer, "%s %s\n%s\n%.1f %.1f\n",
                e[i].nom, e[i].prenom, e[i].adresse, e[i].note1, e[i].note2);

        // Écrire dans le fichier "etudiant.txt"
        ecrire_dans_fichier("etudiant.txt", buffer);

        printf("\n");
    }

    printf("Les détails des étudiants ont été enregistrés dans le fichier etudiant.txt.\n");

    // Optionnel : afficher le contenu du fichier
    printf("\nContenu actuel du fichier etudiant.txt :\n");
    lire_fichier("etudiant.txt");

    return 0;
}
