#include "tobin.h"
resti=0;
numeri=0;
int tobin(int numerodec)
{
    numerocorrente=numerodec;
    while(numerocorrente>0)
    {
        if(numerocorrente%2==0)
        {
            resti=resti+10;
            numerodarimouvere=1;
        }
        else
        {
            resti=resti+10;
            resti++;
        }
        numerocorrente=numerocorrente/2;
    };
    return resti;
    
}