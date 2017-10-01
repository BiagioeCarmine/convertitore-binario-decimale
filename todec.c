#include "convertitore.h"
int numerodauscire=0;
int i=0;
int todec(int numerobin)
{
  numerocorrente=numerobin;
  while(numerocorrente>0)
  {
    numerodauscire=numerodauscire+(numerocorrente%10)*pow(2,i);
    numerocorrente=numerocorrente/10;
    i++;
  }
  return numerodauscire;
}
