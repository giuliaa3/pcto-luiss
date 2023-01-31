/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float celsius;
    float kelvin;
    float farenheit;
    
    printf("inserisci una temperatura in celsius");
    scanf ("%f", &celsius);
    
    
    if (celsius < -273,15) {
        printf ("è sbagliato"); 
        
        }
        else {
           farenheit= (9/5)*celsius+32;
           kelvin= celsius+273.15;
        printf ("la temperatura in kelvin è %f", kelvin);
        printf ("la temperaturabin farenheit è %f", farenheit);
    }
    

    return 0;
}
