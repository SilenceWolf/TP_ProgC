#include <stdio.h>
#include <string.h>

int main(){
  int i;
  int j;
  int taille;
  printf("la taille du triangle: ");
  scanf("%d", &taille);
  
  for(i=0;i<taille<10;i++){
    
    for(j=0;j<i;j++){
      
      if (j%2==1 || i==0 || i==taille) {
        printf("*");
      } else{
        printf("#");
      }

    }
    printf("\n");
  }


}












