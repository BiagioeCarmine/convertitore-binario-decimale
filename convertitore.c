#include "convertitore.h"

int main()
{
    printf("Vuoi che  il programma converta da DECIMALE A BINARIO(SCRIVI 10)\n\t\t\toppure da BINARIO A DECIMALE(SCRIVI 2)?\n");
    scanf("%d",&decobin);
    while(decobin!=2 && decobin!=10) // Tutto in maiuscolo perché il programma "si arrabia" per l'incompetenza dell'utente
    {
        printf("DEVI SCRIVERE PER FORZA UN NUMERO CHE DEVE ESSERE 10 O 2 per dire cosa vuoi che il programma ");
        printf("FACCIA, \nDOPO SCEGLIERAI UN NUMERO DA CONVERTIRE\n");
        printf("VUOI CHE  IL PROGRAMMA CONVERTA DA DECIMALE A BINARIO(SCRIVI 10)\n\t\t\tOPPURE DA BINARIO A DECIMALE(SCRIVI 2)?\n");        
        scanf("%d",&decobin);        
    };
    conversione();  // definita in funzionievariabilivarie.c
    printf("Prova: hai inserito->%d\n prima e poi->%d",decobin,numeroin);
}