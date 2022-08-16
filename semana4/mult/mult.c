#include "multiplicacao.h"

int multiplicacao_russa(int a, int b){
  if(a == 0)return 0;
  if(a % 2 == 0) return 2*multiplicacao_russa(a/2, b);
  else b + 2 * multiplicacao_russa((a-1)/2, b);
}
