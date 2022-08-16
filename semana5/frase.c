#include "frase.h"
#include <math.h>

void estatisticas_frase(char frase[], int *min, int *max, int *soma, double *media, double *desvio) {
  int i = 0, tam = 0, n = 0, auxDesv = 0;
  int vetor[20];
  *max = *soma = *media = *desvio = 0;
  *min = 100;
  while(frase[i] != '\n'){
    if(frase[i+1] == ' ' || frase[i+1] == '\n'){
      tam++;
      if(tam < *min)*min = tam;
      else if(tam > *max)*max = tam;
      vetor[n] = tam;
      *soma += tam;
      tam = 0;
      n++;
    }
    i++;
  }
  *media = *soma/n;

  for (int j = 0; j < n; j++)
      auxDesv += pow(vetor[j] - *media, 2);
  *desvio = sqrt(auxDesv / (float)n);
}
