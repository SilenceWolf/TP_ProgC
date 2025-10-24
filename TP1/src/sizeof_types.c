#include <stdio.h>
#include <string.h>

int main(){
  
  char var_char;
  unsigned char var_char_unsigned;
  
  short var_short;
  unsigned short var_short_unsigned;
  
  int var_int;
  unsigned int var_int_unsigned;
  
  long int var_long_int;
  unsigned long int var_long_int_unsigned;
  
  long long int var_long_long_int;
  unsigned long long int var_long_long_int_unsigned;
  
  float var_float;
  double var_double;
  long double var_long_double;

  printf("var char size : %zu octet(s)\n" ,sizeof(var_char));
  printf("var char unsigned size : %zu octet(s)\n" ,sizeof(var_char_unsigned));
  
  printf("var short size : %zu octet(s)\n" ,sizeof(var_short));
  printf("var short unsigned size : %zu octet(s)\n" ,sizeof(var_short_unsigned));
  
  printf("var int size : %zu octet(s)\n" ,sizeof(var_int));
  printf("var int unsigned size : %zu octet(s)\n" ,sizeof(var_int_unsigned));
  
  printf("var long int size : %zu octet(s)\n" ,sizeof(var_long_int));
  printf("var long int unsigned size : %zu octet(s)\n" ,sizeof(var_long_int_unsigned));
  
  printf("var long long int size : %zu octet(s)\n" ,sizeof(var_long_long_int));
  printf("var long long int unsigned size : %zu octet(s)\n" ,sizeof(var_long_long_int_unsigned));
  
  printf("var float size : %zu octet(s)\n" ,sizeof(var_float));
  printf("var double size : %zu octet(s)\n" ,sizeof(var_double));
  printf("var long size : %zu octet(s)\n" ,sizeof(var_long_double));
  
  


  
}






