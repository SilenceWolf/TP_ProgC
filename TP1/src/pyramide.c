#include <stdio.h>
#include <string.h>


int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {

        // espaces
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

        // nombres croissants
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // nombres décroissants
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("Pyramide terminée.\n");

    return 0;
}
