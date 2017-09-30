#include "convertitore.h"
int resti=0;
int numeri=0;
int contatore=1;
int resto=0;
int tobin(int numerodec)
{
    numerocorrente=numerodec;	
    while(numerocorrente>0)
    {
        if(numerocorrente%2==0)
        {
        	resto=0;
            resti=resti+resto*contatore;
        }
        else
        {
        	resto=1;
            resti=resti+resto*contatore;
        }
        numerocorrente=numerocorrente/2;
        contatore=contatore*10;
    };
    return resti;
    
}
