#include <stdio.h>
#include <math.h>

void printvetor(int n, float m_entrada[n][n]){
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%.2f ", m_entrada[i][j]);
    }
    printf("\n");
  }
}
void remove_primeira_linha_e_coluna_c(int n, float m_entrada[n][n], float m_saida[n-1][n-1], int c) {
  for(int i = 1; i < n; i++){
    int aux = 0;
    for (int j = 0; j < n-1; j++) {
      if(j == c)aux = 1;
      m_saida[i-1][j] = m_entrada[i][j+aux];
    }
  }
}

int main() {
    int n;
    scanf("%d", &n);

    float m_entrada[n][n];
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        scanf("%f", &m_entrada[i][j]);
      }
    }
    float m_saida[n-1][n-1];

    printvetor(n, m_entrada);
    remove_primeira_linha_e_coluna_c(n, m_entrada, m_saida, 2);
    printf("matriz saida:\n");
    printvetor(n-1, m_saida);
    return 0;
}
