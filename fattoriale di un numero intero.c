/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void fattoriale (int numero)


{
   
    int tot=1;
    while(numero>0)
    {
        tot=tot*numero;
        numero=numero-1;
    }
     printf("il fattoriale è: %d\n", tot);
}
    
    
    
        
 int main() 
{ 
    int N;
    printf("inserisci un numero");
    scanf("%d", &N);  
    
    fattoriale(N);
    



    return 0;
}
