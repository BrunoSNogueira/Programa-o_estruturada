#include <stdio.h>

int contafreq(int num, int digito){
  int cont = 0;
  if(num > 0){
    printf("num: %d\n", num);
    if(num % 10 == digito){
      cont++;
      printf("cont: %d\n", cont);
    }
    contafreq(num/10, digito);
  }
  return cont;
}

int main(){
  contafreq(12343, 3);
}
