#include "convertitore.h"

int numeroin;     // decobin è il numero che viene dato dall'utente alla prima domanda (se è uguale a
int numeroout;    // 2 significa che l'utente vuole convertire da binario a decimale, se è uguale a 10 il contrario)
int decobin;      // numeroin è il numero che l'utente dà in input e numeroout è il numero che daremo in output
int numerocorrente;
char altraconv;
bool STOP=0;  // Se è uguale a 1 vuol dire che l'utente ha detto di voler mettere un numero binario ma ci sono cifre che non ci dovrebbero essere
int main()
{
    printf("-----------------------------------------------------------------\nConvertitore binario-decimale decimale-binario di Biagio e Carmine\n");
    printf("-----------------------------------------------------------------\n");
    printf("Vuoi che  il programma converta da DECIMALE A BINARIO(SCRIVI 10)\n\t\t\toppure da BINARIO A DECIMALE(SCRIVI 2)?\n(2 o 10?):");
    scanf("%d",&decobin);
    while(decobin!=2 && decobin!=10) // Tutto in maiuscolo perché il programma "si arrabbia" per l'incompetenza dell'utente
    {
        printf("DEVI SCRIVERE PER FORZA UN NUMERO CHE DEVE ESSERE 10 O 2 per dire cosa vuoi che il programma ");
        printf("FACCIA, \nDOPO SCEGLIERAI UN NUMERO DA CONVERTIRE\n");
        printf("VUOI CHE  IL PROGRAMMA CONVERTA DA DECIMALE A BINARIO(SCRIVI 10)\n\t\t\tOPPURE DA BINARIO A DECIMALE(SCRIVI 2)?\n(2 o 10 SOLO):");
        scanf("%d",&decobin);
    };
    conversione();  // definita in funzionievariabilivarie.c
    return 0;
}

void conversione()
{
    if(decobin==10)
    {
        printf("Inserisci un numero decimale da convertire in binario (massimo 1023)\nNumero da convertire:");
        scanf("%d",&numeroin);
        numeroout=tobin(numeroin);
        printf("IL TUO NUMERO CONVERTITO IN BINARIO E':%d\n\n",numeroout);
    }
    else
    {
        printf("Inserisci un numero binario da convertire in decimale (massimo 1111111111)\nnNumero da convertire:");
        scanf("%d",&numeroin);
        numeroout=todec(numeroin);
        if(!STOP)
          printf("IL TUO NUMERO CONVERTITO IN DECIMALE E':%d\n\n",numeroout);
        else
        {
          printf("NON HAI INSERITO UN NUMERO BINARIO FESSO!\n");
          main();
        }
    }
    printf("Vuoi fare un'altra conversione?\n(s/n)");
    scanf("%c",&altraconv);
    while(altraconv!='s' && altraconv!='S' && altraconv!='y' && altraconv!='Y' && altraconv!='n' && altraconv!='N')
    {
      printf("Vuoi fare un'altra conversione?\n(SOLO S o N)");
      scanf("%c",&altraconv);
    }
    if(altraconv=='s' || altraconv=='S' || altraconv=='y' || altraconv=='Y')
    {
      main();
    }
}
