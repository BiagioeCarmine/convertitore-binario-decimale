#include "convertitore.h"
int numerodauscire=0;
int i=0;
int i2=0;
bool check_if_bin(int numerodacon);
int todec(int numerobin)
{
  check_if_bin(numerobin);
  numerocorrente=numerobin;
  while(numerocorrente>0)
  {
    numerodauscire=numerodauscire+(numerocorrente%10)*pow(2,i);
    numerocorrente=numerocorrente/10;
    i++;
  }
  return numerodauscire;
 }

bool check_if_bin(int numerodacon)
{
  if(numerodacon==0)
  {
    return 1;
  }
  else
  {
    while(numerodacon>0)
    {
      if(numerodacon%10!=0 && numerodacon%10!=1)
        STOP=1;
      numerodacon=numerodacon/10;
    }
    if(STOP)
    return 0;

  }
}
