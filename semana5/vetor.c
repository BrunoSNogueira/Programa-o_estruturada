#include "vetor.h"
#include <math.h>

void estatisticas_vetor(int vetor[], int n, int *min, int *max, int *soma, double *media, double *desvio) {
    float auxDesv = 0;
    *soma = *desvio = *media = 0;
    *min = *max = vetor[0];

    for(int i = 0; i < n; i++){
      if(*min > vetor[i]) *min = vetor[i];
      if(*max < vetor[i]) *max = vetor[i];
      *soma += vetor[i];
    }
    *media = *soma/(float)n;

    for (int i = 0; i < n; i++)
        auxDesv += pow(vetor[i] - *media, 2);
    *desvio = sqrt(auxDesv / (float)n);
}

/*
int main(){
  int n, *min, *max, *soma;
  n = 3;
  int vetor[n];
  double *media, *desvio;
  estatisticas_vetor(vetor, n, *min, *max, *soma, *media, *desvio);
  printf("min = %d, max = %d, soma = %d, media = %d, desvio = %d", *min, *max, *soma, *media, *desvio);
}
*/
