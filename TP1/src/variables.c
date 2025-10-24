#include <stdio.h>
#include <string.h>

int main(){
  
  char var_char="eeeeeeee";
  unsigned char var_char_unsigned="ééééé";
  
  short var_short=3;
  unsigned short var_short_unsigned=-3;
  
  int var_int=1620;
  unsigned int var_int_unsigned=-1620;
  
  long int var_long_int=888888888888888888;
  unsigned long int var_long_int_unsigned=-8888888888888888888888888;
  
  long long int var_long_long_int=9999999999999999999999999999999999999999999999999999;
  unsigned long long int var_long_long_int_unsigned=-999999999999999999999999999999999999999999999;
  
  float var_float=0.1;
  double var_double=0.1254;
  long double var_long_double=0.1365485446958456;

  printf("var char size : %c\n" ,sizeof(var_char));
  printf("var char unsigned size : %c\n" ,sizeof(var_char_unsigned));
  
  printf("var short size : %d\n" ,sizeof(var_short));
  printf("var short unsigned size : %zu octet(s)\n" ,sizeof(var_short_unsigned));
  
  printf("var int size : %d\n" ,sizeof(var_int));
  printf("var int unsigned size : %d\n" ,sizeof(var_int_unsigned));
  
  printf("var long int size : %d\n" ,sizeof(var_long_int));
  printf("var long int unsigned size : %d\n" ,sizeof(var_long_int_unsigned));
  
  printf("var long long int size : %d\n" ,sizeof(var_long_long_int));
  printf("var long long int unsigned size : %d\n" ,sizeof(var_long_long_int_unsigned));
  
  printf("var float size : %f\n" ,sizeof(var_float));
  printf("var double size : %f\n" ,sizeof(var_double));
  printf("var long size : %f\n" ,sizeof(var_long_double));
  
  
  
}
