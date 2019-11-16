
#include <stdio.h>
#include "functions.h"

// celsius to Fahrenheit function takes in the returned 
// value from data validation function to convert it to
// Fahrenheit and send the result to stdout.
int Convert_from_Celcius(var Tempvalues){
    
    // Get Fahrenheit value.
    float Fahrenheit = (Tempvalues.num * 9/5) + 32;

    // Get the Kelvin value
    float kelvin = Tempvalues.num + 273.15;

    // write to stdout
    printf("\n\n");
    printf("\n\tCelcius \t Fahrenheit \t Kelvin");
    printf("\n\t%.2f \t\t %.2f \t\t %.2f\n", Tempvalues.num, Fahrenheit, kelvin);

    return 0;
}

