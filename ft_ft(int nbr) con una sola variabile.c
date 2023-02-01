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
  int  n=1;
  printf("il valore iniziale:%d\n", n);
  ft_ft(&n);
  printf ("il valore effettivo dopo aver richiamato ft_ft:%d\n", n);

    return 0;
}
