void exercice_4_2() {
    int choix;
    char nom_fichier[100];
    char message[256];

    printf("Que souhaitez-vous faire ?\n1. Lire un fichier\n2. Écrire dans un fichier\nVotre choix : ");
    scanf("%d", &choix);
    getchar(); // pour consommer le '\n' laissé par scanf

    if(choix == 1) {
        printf("Entrez le nom du fichier à lire : ");
        fgets(nom_fichier, sizeof(nom_fichier), stdin);
        nom_fichier[strcspn(nom_fichier, "\n")] = '\0'; // enlever le '\n'
        lire_fichier(nom_fichier);
    } else if(choix == 2) {
        printf("Entrez le nom du fichier à écrire : ");
        fgets(nom_fichier, sizeof(nom_fichier), stdin);
        nom_fichier[strcspn(nom_fichier, "\n")] = '\0';

        printf("Entrez le message à écrire : ");
        fgets(message, sizeof(message), stdin);
        message[strcspn(message, "\n")] = '\0';

        ecrire_dans_fichier(nom_fichier, message);
    } else {
        printf("Choix invalide.\n");
    }
}
