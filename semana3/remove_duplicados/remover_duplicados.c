#include "remover_duplicados.h"

void remover_duplicados(int vetor[], int qtd) {
  int aux, aux2;

  for(int i = 0; i < qtd; i++)
    if(vetor[i] == vetor[i+1]){
      aux = vetor[qtd-1];
      aux2 = vetor[qtd-2];
      vetor[qtd-1] = -1;

      for(int j = qtd-2; j >= i+1; j--){
        vetor[j] = aux;
        aux = aux2;
        aux2 = vetor[j-1];
      }
      if(vetor[i] != -1)
        i--;
    }
}
