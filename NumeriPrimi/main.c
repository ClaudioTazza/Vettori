#include <stdio.h>

int main(){

  int i, conta, vettore[1000];

  for(i = 0; i < 1000; i++){
    if (i%2 == 0){
      vettore[i] = 0;}

    else{
      vettore[i] = 1;}
  }

 for(i = 2; i < 500; i++){
    if (vettore[i] == 1){

      for(conta = i+i; conta < 1000; conta += i){
        vettore[conta] = 0;}

    }
  }

  for(i = 0; i < 1000; i++){
    printf("%6d\t%6d\n", i, vettore[i]);}

  return 0;
}
