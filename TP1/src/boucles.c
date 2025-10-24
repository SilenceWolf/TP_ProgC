#include <stdio.h>
#include <string.h>

int main(){
  int i;
  int j;
  int taille;
  printf("la taille du triangle: ");
  scanf("%d", &taille);
  
  for (i = 1; i <= taille; i++) {
        for (j = 1; j <= i; j++) {

            // Première et dernière ligne → que des *
            if (i == 1 || i == taille) {
                printf("* ");
            }
            // Sinon : * aux bords, # à l'intérieur
            else if (j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
        }
        printf("\n");
    }

}






















