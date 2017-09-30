#ifndef CONVERTITORE_H          // Include guard:https://it.wikipedia.org/wiki/Include_guard
#define CONVERTITORE_H
#include <stdio.h>
extern int numeroin;            // decobin è il numero che viene dato dall'utente alla prima domanda (se è uguale a
extern int numeroout;           // 2 significa che l'utente vuole convertire da binario a decimale, se è uguale a 10 il contrario)
extern int decobin;             // numeroin è il numero che l'utente dà in input e numeroout è il numero che daremo in output
void conversione();   // conversione() dovrebbe essere l'unica funzione da chiamare in main() per convertire il numero
int tobin(int numerodec);       // tobin converte in binario il numero dato in input
int todec(int numerobin);       // todec fa il contrario
#endif