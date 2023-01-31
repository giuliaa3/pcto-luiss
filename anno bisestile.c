/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int anno;
    printf("inserire un anno");
    scanf ("%d", &anno);
    
    if((anno%4==0 && anno%100!=0) || anno%400==0) {
    printf ("è bisestile"); }
    else {
    printf ("non è bisestile"); }
    
    
    return 0;
}
