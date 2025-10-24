#include <stdio.h>
#include <string.h>

int main(){
  int i;
  int j;
  for(i=0;i<10;i++){
    
    for(j=1;j<i-1;j++){
      
      if (j==i) {
        printf("#");
      } else{
        printf("*");
      }

    }
    printf("\n");
  }


}








