#include <stdio.h>
#include <string.h>

int main(){
  
  char var_char='e';
  unsigned char var_char_unsigned='E';
  
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

  printf("var char : %i\n" ,var_char);
  printf("var char unsigned : %u\n" ,var_char_unsigned);
  
  printf("var short : %i\n" ,var_short);
  printf("var short unsigned : %u\n", var_short_unsigned);
  
  printf("var int : %li\n" ,var_int);
  printf("var int unsigned : %lu\n" ,var_int_unsigned);
  
  printf("var long int : %li\n" ,var_long_int);
  printf("var long int unsigned : %lu\n" ,var_long_int_unsigned);
  
  printf("var long long int : %li\n" ,var_long_long_int);
  printf("var long long int unsigned : %lu\n" ,var_long_long_int_unsigned);
  
  printf("var float : %ld\n" ,var_float);
  printf("var double : %ld\n" ,var_double);
  printf("var long : %ld\n" ,var_long_double);
  
  
  
}











