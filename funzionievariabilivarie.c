#include "convertitore.h"
int numeroin;
int numeroout;
int decobin;
int numerocorrente;
void conversione()
{
    if(decobin==10)
    {
        printf("Inserisci un numero decimale da convertire in binario\nNumero da convertire:");
        scanf("%d",&numeroin);
        numeroout=tobin(numeroin);
        printf("IL TUO NUMERO CONVERTITO IN BINARIO E':%d\n\n",numeroout);
    }
    else
    {
        printf("Inserisci un numero binario da convertire in decimale (massimo 1023)\nnNumero da convertire:");
        scanf("%d",&numeroin);
        numeroout=todec(numeroin);
        printf("IL TUO NUMERO CONVERTITO IN DECIMALE E':%d\n\n",numeroout);
    }
}