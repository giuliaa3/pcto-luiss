/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void ft_ft(int numero, int potenza)
{
    int risultato;
    risultato=numero;
    while(potenza>1)
    {
    risultato = risultato * numero;
    potenza=potenza-1;
    printf("il risultato è:%d\n", risultato);
    
    }
}

int main()
{
   int numero;
   int potenza;
   int risultato;
   
   
   printf("inserisci un numero ");
   scanf("%d", &numero); 
    printf("scrivi la potenza a cui vuoi elevare il numero ");
   scanf("%d", &potenza);
   
   ft_ft(numero, potenza);
   
   
}
