#include "op_ponteiro.h"

void operacao_int(int a, int b, int op, int* res){
  if(op == '+')*res = a + b;
  else if(op == '-')*res = a - b;
  else if(op == '*')*res = a * b;
  else if(op == '/')*res = a / b;
  else if(op == '%')*res = a % b;
  else if(op == '^')*res = a ^ b;
  else if(op == '|')*res = a | b;
  else if(op == '&')*res = a & b;
}
