#include <stdio.h>

int sort_vet(int V[], int in, int n){
  int aux, aux2, cont, i;
  cont = 0;

  while(cont < n){
    if(V[cont] > in){
      aux = V[cont];
      aux2 = V[cont+1];
      i = cont+1;
      while(i < n + 1){
        V[i] = aux;
        aux = aux2;
        aux2 = V[i+1];
        i++;
      }
      return cont;
    }
    cont++;
  }
  return --cont;
}

void fill_vet(int V[], int in, int n){
  int pos;

  pos = sort_vet(V, in, n);
  V[pos] = in;
}

void print_vet(int V[], int n){
  for(int i = 0; i < n + 1; i++)
    if(V[i] != 0)
      printf("%d ", V[i]);
  printf("\n");
}

void main(){
  int in, n;
  int V[100] = {0};
  n = 1;

  while (1){
    scanf("%d", &in);
    if(in < 0)
      break;
    else
      fill_vet(V, in, n);
    n++;
    print_vet(V, n);
  }
}
