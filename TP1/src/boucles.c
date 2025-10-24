#include <stdio.h>
#include <string.h>

int main(){
  int i;
  int j;
  int taille;
  printf("la taille du triangle: ");
  scanf("%d", &taille);
  
  for(i=1;(i<=taille)&&(taille<=10);i++){
    
    for(j=1;(j<=2)&&(j<=i);j++){

                
                if (j==1||j==i) {
                    printf("* ");
                }else{
                    printf("# ");
                }

    }
    printf("\n");
  }


}


















