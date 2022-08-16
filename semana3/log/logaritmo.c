#include <stdio.h>

double logaritmo(double x, int n){
  x = x - 1;
  double y, valorx;
  y = 0;
  valorx = 1;

  for(int i = 1; i < n; i++){
    valorx = valorx * x;
    printf("valor x: %f\n", valorx);
    if(i % 2 == 0)
      y -= (valorx/(double)i);
    else
      y += (valorx/(double)i);
    printf("valor y: %f\n", y);
  }
  return y;
}

void main(){
  double x = 0.5;
  printf("%f", logaritmo(x , 10));
}
