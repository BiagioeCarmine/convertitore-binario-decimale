#ifndef CONVERTITORE_H          // Include guard:https://it.wikipedia.org/wiki/Include_guard
#define CONVERTITORE_H
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
extern int numeroin;            // decobin è il numero che viene dato dall'utente alla prima domanda (se è uguale a
extern int numeroout;           // 2 significa che l'utente vuole convertire da binario a decimale, se è uguale a 10 il contrario)
extern int decobin;             // numeroin è il numero che l'utente dà in input e numeroout è il numero che daremo in output
void conversione();   // conversione() dovrebbe essere l'unica funzione da chiamare in main() per convertire il numero, definita in funzionievariabilivarie.c
int tobin(int numerodec);       // tobin converte in binario il numero dato in input, definita in tobin.c
int todec(int numerobin);       // todec fa il contrario , definita in todec.c
extern int numerocorrente;      // Il numero che verrà manipolato durante l'esecuzione del programma
extern bool STOP;               // Se è uguale a 1 vuol dire che l'utente ha detto di voler mettere un numero binario ma ci sono cifre che non ci dovrebbero essere
#endif
