#include "dec2bin.h"

int dec2bin(int n_decimal) {
  int binario = 0;
  if(n_decimal == 0)return 0;
  else return(n_decimal % 2 + 10 * dec2bin(n_decimal/2));
}
