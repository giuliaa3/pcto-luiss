/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void ft_ultimate_ft(int*********nbr)
{ 
    *********nbr=42;
}

int main()
{
   int a, *b, **c, ***d, ****e, *****f, ****** g, *******h, ********i, *********l;
   
   a=1;
   b= &a;
   c= &b;
   d= &c;
   e= &d;
   f= &e;
   g= &f;
   h= &g;
   i= &h;
   l= &i;
   
  
   ft_ultimate_ft(l);

   printf("%d\n", *********l); 

    return 0;
}
