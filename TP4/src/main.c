#include <stdio.h>
#include <string.h>


#include "operator.h"  // pour 4.1
#include "fichier.h"   // pour 4.2
#include "liste.h"     // pour 4.7

// Déclaration des fonctions pour chaque exercice
void exercice_4_1(); // Calcul avec opérateurs
void exercice_4_2(); // Gestion de fichiers
void exercice_4_7(); // Liste de couleurs

int main() {
    int choix;

    printf("Choisissez l'exercice à exécuter :\n");
    printf("1 - Calcul avec opérateurs (4.1)\n");
    printf("2 - Gestion de fichiers (4.2)\n");
    printf("3 - Liste de couleurs (4.7)\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch(choix) {
        case 1:
            exercice_4_1();
            break;
        case 2:
            exercice_4_2();
            break;
        case 3:
            exercice_4_7();
            break;
        default:
            printf("Choix invalide.\n");
            break;
    }

    return 0;
}
