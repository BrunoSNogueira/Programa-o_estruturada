#include "determinante.h"
#include <stdio.h>
#include <math.h>

void remove_primeira_linha_e_coluna_c(int n, float m_entrada[n][n], float m_saida[n-1][n-1], int c) {
  for(int i = 1; i < n-1; i++){
    for (int j = 0; j < n-1; j++) {
      if(j == c)j++;
      m_saida[i-1][j] = m_entrada[i][j];
    }
  }
}

float calcula_determinante(int n, float m_entrada[n][n]) {
  int det = 0;
  int m_saida[n-1][n-1];

  if(n == 1)return) m_entrada[0][0];
  else{
    for (int j = 0; j < n; j++) {
      if(j%2 == 0)sinal = 1;
      else sinal = -1;

      float m_saida[n-1][n-1];
      remove_primeira_linha_e_coluna_c(n, m_entrada, m_saida, j);

      det += m_entrada[0][j] * sinal * calcula_determinante(n-1, m_saida);
    }
  }
  return det;
}

int main() {
    int n;
    scanf("%d", &n);

    int m_entrada[n][n];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        scanf("%f", &m_entrada[i][j]);
      }
    }

    prinft("%.2f", calcula_determinante(n, m_entrada));
    return 0;
}
