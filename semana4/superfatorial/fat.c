#include "superfatorial.h"
int fatorial(int n){
  if(n == 1)return 1;
  else return(n*fatorial(n-1))
}

long superfatorial(int n) {
  if(n == 1)return 1;
  else return (fatorial(n)*superfatorial(n-1));
}
