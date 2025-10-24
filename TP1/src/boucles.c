#include <stdio.h>
#include <string.h>

int main(){
  int i;
  int j;
  int taille;
  printf("la taille du triangle: ");
  scanf("%d", &taille);
  
  for(i=1;(i<=taille)&&(taille<=10);i++){
    
    for(j=1;j<=i;j++){
      
      
            if (i == 1 || i == 5)
                printf("* ");
            else {
                
                if (j % 2 == 1)
                    printf("* ");
                else
                    printf("# ");
            }

    }
    printf("\n");
  }


}
















