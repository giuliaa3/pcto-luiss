/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    int cont;
    int somma;
    int media;
    
    
    
    printf("inserire dei numeri positivi\n");
    numero=0;
    somma=0;
    media=0;
    cont=0;
    
    while(numero>=0)
    {
     scanf("%d", &numero);
    somma= somma+numero;
    cont= cont+1;
    media= somma/cont;
    printf ("fare la media di tutti i numeri:%d\n",media);
    
    }
    
    
    

    return 0;
}
