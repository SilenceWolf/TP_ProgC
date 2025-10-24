#include <stdio.h>
#include <string.h>

int main(){
  int i;
  int j;
  int taille;
  
  scanf("%d", &taille);
  
  for (i = 1; i <= taille; i++) {
        for (j = 1; j <= i; j++) {

           
            if (i == 1 || i == taille) {
                printf("* ");
            }
            
            else if (j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

  while (i <= taille){
    while (j <= i){
        if (i == 1 || i == taille) {
                printf("* ");
            }
            
            else if (j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
      j++
    }
    printf("\n");
    i++
  }

}

























