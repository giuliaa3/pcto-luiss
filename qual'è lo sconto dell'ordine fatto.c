/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int sconto;
    int prezzo;
    int n_ordine;
    float totale;
    
    prezzo=5;
    n_ordine=0;
    
    while(prezzo>0) 
    {
    
    printf("quanti ordini hai fatto?\n");
    scanf("%d", &n_ordine);
   
    if (n_ordine>30) {
    totale= prezzo*n_ordine*(1-0.1);
    printf("il totale scontato è:%f\n", totale);
   }
    
    else if (n_ordine>50) {
    totale= prezzo*n_ordine*(1-0.15);
    printf("il totale scontato è:%f\n", totale);
    }
    
    else {
    
    totale= prezzo*n_ordine;
    printf("il totale che devi pagare è:%f\n", totale);
     }
    

    return 0;
}
}
