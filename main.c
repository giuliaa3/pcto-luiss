/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero1;
    
    printf("che numero è");
    scanf ("%d", &numero1);
    
    int numero2;
    printf ("che numero è");
    scanf ("%d", &numero2);
    
   
    
      
         if (numero1 % numero2==0){
    printf ("numero1 è multiplo di numero2");
     }
    else
    {
    printf("numero1 non è multiplo di numero2");}
    return 0;
    
}
