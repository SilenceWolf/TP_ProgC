#include "liste.h"
#include <stdio.h>
#include <string.h>


void exercice_4_7() {
    struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    struct couleur couleurs[10] = {
        {0xFF, 0x00, 0x00, 0xFF}, // rouge
        {0x00, 0xFF, 0x00, 0xFF}, // vert
        {0x00, 0x00, 0xFF, 0xFF}, // bleu
        {0xFF, 0xFF, 0x00, 0xFF}, // jaune
        {0xFF, 0x00, 0xFF, 0xFF}, // magenta
        {0x00, 0xFF, 0xFF, 0xFF}, // cyan
        {0x80, 0x80, 0x80, 0xFF}, // gris
        {0xFF, 0x80, 0x00, 0xFF}, // orange
        {0x80, 0x00, 0x80, 0xFF}, // violet
        {0x00, 0x80, 0x80, 0xFF}  // bleu foncé
    };

    for(int i=0; i<10; i++) {
        insertion(&couleurs[i], &ma_liste);
    }

    printf("Liste des couleurs :\n");
    parcours(&ma_liste);
}
