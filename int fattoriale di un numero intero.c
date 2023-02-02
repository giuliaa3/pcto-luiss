/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int fattoriale (int numero)


{
   
    int tot=1;
    while(numero>0)
    {
        tot=tot*numero;
        numero=numero-1;
    }
     return (tot);
}
    
    
    
        
 int main() 
{ 
    int N;
    int fact;
    
    printf("inserisci un numero");
    scanf("%d", &N);  
    
    fact = fattoriale(N);
    
printf("il fattoriale è: %d\n", fact);


    return 0;
}