/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void ordinanumeri(int *array, int dimensione)
{
    int temp;
    int t;
    int z;
    
    temp=0;
    t=0;
    while(t<dimensione-1)
    {
        z=t+1;
        while(z<dimensione)
        {
        if(array[t]>array[z])
    {
        temp=array[t]; 
        array[t]=array[z];
        array[z]=temp;
    }
    z=z+1;
    }
    t=t+1;
    
    
}
}

int main()
{
    int array[]={8,2,6,1,4,7};
    int dimensione=6;
    int t=0;
    
    ordinanumeri(array, dimensione);
    while(t<dimensione)
    {
        printf("%d\n", array[t]);
        t=t+1;
    }

    return 0;
}
