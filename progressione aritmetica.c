/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;
    
    printf("inserisci tre numeri");
    scanf ("%d, %d, %d", &numero1,&numero2,&numero3);
    if(numero1-numero2 == numero2-numero3) {
        printf ("in progressione aritmetica"); }
        else {
            printf("non in progressione aritmetica");
        }
        


    return 0;
}
