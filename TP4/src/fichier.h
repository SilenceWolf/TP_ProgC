#ifndef FICHIER_H
#define FICHIER_H
#include <stdio.h>
#include <string.h>

void lire_fichier(const char *nom_de_fichier) {
    FILE *f = fopen(nom_de_fichier, "r");
    if (!f) {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return;
    }
    char ligne[256];
    while (fgets(ligne, sizeof(ligne), f)) {
        printf("%s", ligne);
    }
    fclose(f);
}

void ecrire_dans_fichier(const char *nom_de_fichier, const char *message) {
    FILE *f = fopen(nom_de_fichier, "a");
    if (!f) {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return;
    }
    fprintf(f, "%s", message);
    fclose(f);
    printf("Message écrit dans %s\n", nom_de_fichier);
}

#endif

