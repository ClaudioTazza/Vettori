/* stringhe.c */

/* Le stringhe sono vettori */

#include <stdio.h>

int main()
{
  /* Una stringa in C e' un vettore di caratteri
   * che termina con uno zero
   */
  char str1[5];
  str1[0] = 'C';
  str1[1] = 'i';
  str1[2] = 'a';
  str1[3] = 'o';
  str1[4] = '\0';

  /* Possiamo semplificare la scrittura utilizzando
   * l'inizializzazione in fase di definizione dei vettori
   */
  char str2[5] = { 'C', 'i', 'a', 'o', '\0' };
  
  /* Cosi' facendo pero' rischiamo di commettere
   * errori nel conteggio dei caratteri (soprattutto in
   * caso di modifiche successive al programma).
   * Allora lasciamo che sia il compilatore a contare per noi
   */
  char str3[] = { 'C', 'i', 'a', 'o', '\0' };

  /* La situazione e' migliorata ma risulta ancora
   * scomodo scrivere una stringa.
   * Il C ci viene in aiuto mediante un'altra notazione
   */
  char str4[] = "Ciao";

  printf("str1: %s\n"
      "str2: %s\n"
      "str3: %s\n"
      "str4: %s\n", str1, str2, str3, str4);

  return 0;
}
