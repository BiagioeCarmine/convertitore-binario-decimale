#include "convertitore.h"

int main()
{
    printf("Decimale>Binario(scrivi 10) o Binario>Decimale(scrivi 2)?\n");
    scanf("%d",&decobin);
    while(decobin!=2 && decobin!=10)
    {
        printf("Devi scrivere per forza un numero tra 10 e 2\n");
        printf("Decimale>Binario(scrivi 10) o Binario>Decimale(scrivi 2)?\n");        
        scanf("%d",&decobin);        
    }
    
}