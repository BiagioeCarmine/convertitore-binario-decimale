#include "convertitore.h"
int numeroin;
int numeroout;
int decobin;
void conversione()
{
    if(decobin==10)
    {
        printf("Inserisci un numero decimale da convertire in binario\n");
        scanf("%d",&numeroin);
        numeroout=tobin(numeroin);
    }
    else
    {
        printf("Inserisci un numero decimale da convertire in decimale\n");
        scanf("%d",&numeroin);
        numeroout=todec(numeroin);
    }
}