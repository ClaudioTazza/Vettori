/* sizeof.c */

/* L'operatore sizeof */

#include <stdio.h>

int main()
{
  /* L'operatore sizeof ritorna il numero di byte di
   * cui e' composta una variabile (o un tipo)
   */

  /* esempio:
   * calcola e stampa la dimensioni degli interi su questa macchina
   */
  printf("Su questa macchina un intero e' composto da %ld byte\n", sizeof(int));

  /* sizeof puo' essere utilizzato per determinare di quanti elementi
   * e' composto un vettore
   */
  char saluto[] = "Ciao";
  printf("La stringa \"%s\" e' memorizzata in un vettore di caratteri di %ld byte.\n"
      "Siccome ogni char ha una dimensione di %ld byte,\n"
      "allora la stringa e' composta di %ld/%ld = %ld caratteri.\n",
      saluto, sizeof(saluto),
      sizeof(char),
      sizeof(saluto), sizeof(char), sizeof(saluto)/sizeof(char));

  return 0;
}
