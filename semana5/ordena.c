void ordena(int *a, int *b, int *c) {
  int aux = 0;
  if(*a > *b){
    if(*a > *c){
      aux = *c;
      *c = *a;
      if(aux < *b)*a = aux;
      else{
        *a = *b;
        *b = aux;
      }
    }
    else{
      aux = *a;
      *a = *b;
      *b = aux;
    }
  }
  else if(*b > *c){
    aux = *c;
    *c = *b;
    if(aux > *a)*b = aux;
    else{
      *b = *a;
      *a = aux;
    }
  }
}
