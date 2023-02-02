/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main()
{
    int i;
    i=0;
    char str[]="bottiglia";
    
    while(str[i]!='\0') 
    {
    i=i+1;
    }
   
    printf("%d\n", i);
    
    while(i>0) 
    {
        i=i-1;
        printf("%c", str[i]);
    }

    return 0;
}
