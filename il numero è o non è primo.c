/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero;
    int div;
    int conta; 
    div=1; //div= contattore che indica i numeri da coinsiderare
    conta=0; //conta= quantità di divisori
    printf("inserisci un numero");
    scanf ("%d", &numero);
    
    while(conta<3 && div<=numero/2)
    {
        if(numero%div==0) {
            conta=conta+1; }
            div=div+1;
    }
    if(conta==1){
        
    printf("il numero è primo\n"); }
    else {
    printf("il numero non è primo\n"); }

    return 0;
}
