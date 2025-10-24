#include <stdio.h>
#include <string.h>

int main(){
  
  char var_char;
  short var_short;
  
  int var_int;
  unsigned int var_int_unsigned;
  
  long int var_long_int;
  unsigned long int var_long_int_unsigned;
  
  long long int var_long_long_int;
  unsigned long long int var_long_long_int_unsigned;
  
  float var_float;
  double var_double;
  long double var_long_double;

  printf("var char size :" ,size(var_char));
  printf("var short size :" ,size(var_short));
  
  printf("var int size :" ,size(var_int));
  printf("var int unsigned size :" ,size(var_int_unsigned));
  
  printf("var long int size :" ,size(var_long_int));
  printf("var long int unsigned size :" ,size(var_long_int_unsigned));
  
  printf("var long long int size :" ,size(var_long_long_int));
  printf("var long long int unsigned size :" ,size(var_long_long_int_unsigned));
  
  printf("var float size :" ,size(var_float));
  printf("var double size :" ,size(var_double));
  printf("var long size :" ,size(var_long_double));
  
  


  
}


