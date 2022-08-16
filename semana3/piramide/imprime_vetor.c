#include <stdio.h>
//#include "imprime_vetor.h"

void imprime_vetor(int vetor[], int qtd) {
  int k, j;
  j = k =0;

  for(int i = 0; i < qtd; i++)
    if(j == k){
      printf("%d\n", vetor[i]);
      j = 0;
      k++;
    }
    else{
      printf("%d ", vetor[i]);
      j++;
    }
}
