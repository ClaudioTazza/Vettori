#include "random.h"
#include <stdlib.h>
#include <time.h>

void random_init(){
  srand(time(NULL));
}

int random_between(int a,int b){
  int num,max;
  max = b-a;
  num = a+(rand()%max);
  return num;
}
