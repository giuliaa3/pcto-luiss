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
    
    printf ("scrivi tre lati");
    scanf ("%d, %d, %d", &lato1, &lato2, &lato3);
    
    if (lato1+lato2 > lato3 && lato2+lato3 > lato1 && lato1+lato3 > lato2) {
    printf("i lati possono essere le lunghezze di un triangolo");}
    else {
    printf ("i lati non possono essre le lunghezze di un triangolo"); }

    

    return 0;
}
