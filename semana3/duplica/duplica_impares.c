#include "duplica_impares.h"

void duplica_impares(int vetor[], int qtd) {
  int aux, aux2;

    for(int i = 0; i < qtd; i++)
      if(vetor[i] % 2 != 0){
        aux = vetor[i+1];
        aux2 = vetor[i+2];
        vetor[i+1] = vetor[j];

        for(int j = i+2; j < qtd; j++){
          vetor[j] = aux;
          aux = aux2;
          aux2 = vetor[j+1]
        }
        i++;
      }
}
