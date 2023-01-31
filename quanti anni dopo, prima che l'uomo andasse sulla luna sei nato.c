/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int anno;
    printf("in che anno sei nato\n");
    scanf ("%d", &anno);
    
    if (anno==1969)
    printf("sei nato nell'anno in cui l'uomo è andato sulla luna");
    else if (anno>1969)
    printf ("sei nato dopo che l'uomo è andato sulla luna di %d anni", anno-1969);
    
    else 
    printf ("sei nato prima che l'uomo andasse sulla luna di %d", 1969-anno);

    return 0;
}
