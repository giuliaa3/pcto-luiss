/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int lato1;
    int lato2;
    int lato3;
    
    printf ("scrivi 3 lati");
    scanf ("%d%d%d", &lato1, &lato2, &lato3);
    
    if(lato1==lato2 && lato1==lato3 && lato2==lato3)
    printf("il triangolo è equilatero");
    
    else if((lato1==lato2 && lato1!=lato3) || (lato1==lato3 && lato1!=lato2) || (lato2==lato3 && lato2!=lato1) )
    printf ("il triangolo è isoscele");
    
    else
    printf ("il triangolo è scaleno");

    return 0;
}
