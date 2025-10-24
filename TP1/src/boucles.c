#include <stdio.h>
#include <string.h>

int main(){
  int i;
  int j;
  int taille;
  scanf("%i", &taille);
  
  for(i=0;i<10;i++){
    
    for(j=1;j<i-1;j++){
      
      if (j%2==1 || i==0 || i==taille) {
        printf("*");
      } else{
        printf("#");
      }

    }
    printf("\n");
  }


}









