/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void ft_ft(int*nbr)
{
    *nbr=42;
}

int main()
{
    int n=2;
    int x=10;
    
    printf("il valore inziale di n:%d\n", n);
    ft_ft(&n);
    printf("il valore effettivo dop aver richiamato ft_ft:%d\n", n);
    
    printf("il valore inziale di x:%d\n", x);
    ft_ft(&x);
    printf("il valore effettivo dop aver richiamato ft_ft:%d\n", x);
    

    return 0;
}
