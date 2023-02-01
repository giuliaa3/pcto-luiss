/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void ft_ft(int*nbr,int*x,int*y)
{
    *nbr=42;
    *x=25;
    y=102;
}

int main()
{
    int nbr=2;
    int x=10;
    int y=3;
    
    
    printf("il valore inziale:%d\n", x);
    ft_ft(&x,&nbr,y);
    
    printf("il valore di:%d\n", x);
    printf("il valore di:%d\n",y);
    printf("il valore effettivo dopo aver richiamato ft_ft:%d\n", nbr);
    

    return 0;
}
