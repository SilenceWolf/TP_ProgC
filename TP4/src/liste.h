#ifndef LISTE_H
#define LISTE_H


void init_liste(struct liste_couleurs *liste) {
    liste->tete = NULL;
}

void insertion(struct couleur *c, struct liste_couleurs *liste) {
    c->suivant = liste->tete;
    liste->tete = c;
}

void parcours(struct liste_couleurs *liste) {
    struct couleur *courant = liste->tete;
    while (courant) {
        printf("Couleur RGBA : %02X %02X %02X %02X\n", courant->r, courant->g, courant->b, courant->a);
        courant = courant->suivant;
    }
}

#endif
