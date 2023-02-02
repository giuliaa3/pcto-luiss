/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int divisione (int n1, int n2, int*quoziente, int *resto)
{
    *quoziente=n1/n2;
    *resto=n1%n2;
}

int main()
{
    int n1;
    int n2;
    int quoziente;
    int resto;
    
    printf("inserisci n1 e n2\n");
    scanf("%d %d", &n1,&n2);
    if(n2==0)
    {
        printf("non puoi dividere per 0\n");
    }
    divisione(n1,n2,&quoziente,&resto);
    printf ("il quoziente è:%d\n", quoziente);
    printf("il resto è:%d\n", resto);
    
    return 0;
}
