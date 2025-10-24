#include <stdio.h>
#include <string.h>

int main(){
  
  char var_char;
  
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

  printf("var char size :" ,sizeof(var_char));
  
  printf("var short size :" ,sizeof(var_short));
  printf("var short unsigned size :" ,sizeof(var_short_unsigned));
  
  printf("var int size :" ,sizeof(var_int));
  printf("var int unsigned size :" ,sizeof(var_int_unsigned));
  
  printf("var long int size :" ,sizeof(var_long_int));
  printf("var long int unsigned size :" ,sizeof(var_long_int_unsigned));
  
  printf("var long long int size :" ,sizeof(var_long_long_int));
  printf("var long long int unsigned size :" ,sizeof(var_long_long_int_unsigned));
  
  printf("var float size :" ,sizeof(var_float));
  printf("var double size :" ,sizeof(var_double));
  printf("var long size :" ,sizeof(var_long_double));
  
  


  
}




