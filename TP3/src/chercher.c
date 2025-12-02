#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    int t[100];
    srand(time(NULL));

    for (int i = 0; i < 100; i++)
        t[i] = rand() % 1000;

    for (int i = 0; i < 100; i++)
        printf("%d ", t[i]);
    printf("\n");

    int x, found = 0;
    printf("Entrez l'entier a chercher : ");
    scanf("%d", &x);

    for (int i = 0; i < 100; i++)
        if (t[i] == x)
            found = 1;

    if (found)
        printf("entier present\n");
    else
        printf("entier absent\n");

    return 0;
}
