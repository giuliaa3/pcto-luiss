/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    char str[]="ciao";
    int i=0;
    while(str[i]!='\0') 
    {
    i=i+1;
    }
   
    printf("%d", i);

    return 0;
}
