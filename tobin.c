#include "tobin.h"
resti=1;
int tobin(int numerodec)
{
    numerocorrente=numerodec;
    while(numerocorrente>0)
    {
        if(numerocorrente%2==0)
        {
            resti=resti*10;
        }
        else
        {
            resti=resti*10;
            resti++;
        }
        numerocorrente=numerocorrente/2;
    };
    return resti;
    
}