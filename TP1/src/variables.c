#include <stdio.h>
#include <string.h>

int main(){
  
  char var_char=e;
  unsigned char var_char_unsigned=é;
  
  short var_short=3;
  unsigned short var_short_unsigned=-3;
  
  int var_int=1620;
  unsigned int var_int_unsigned=-1620;
  
  long int var_long_int=88888888888;
  unsigned long int var_long_int_unsigned=-8888888888888888;
  
  long long int var_long_long_int=999999999999999;
  unsigned long long int var_long_long_int_unsigned=-9999999999999;
  
  float var_float=0.1;
  double var_double=0.1254;
  long double var_long_double=0.1365485446958456;

  printf("var char size : %li\n" ,sizeof(var_char));
  printf("var char unsigned size : %lu\n" ,sizeof(var_char_unsigned));
  
  printf("var short size : %li\n" ,sizeof(var_short));
  printf("var short unsigned size : %lu\n" ,sizeof(var_short_unsigned));
  
  printf("var int size : %li\n" ,sizeof(var_int));
  printf("var int unsigned size : %lu\n" ,sizeof(var_int_unsigned));
  
  printf("var long int size : %li\n" ,sizeof(var_long_int));
  printf("var long int unsigned size : %lu\n" ,sizeof(var_long_int_unsigned));
  
  printf("var long long int size : %li\n" ,sizeof(var_long_long_int));
  printf("var long long int unsigned size : %lu\n" ,sizeof(var_long_long_int_unsigned));
  
  printf("var float size : %double\n" ,sizeof(var_float));
  printf("var double size : %double\n" ,sizeof(var_double));
  printf("var long size : %double\n" ,sizeof(var_long_double));
  
  
  
}





