

#include <stdio.h>
#include "functions.h"

// celsius to Kelvin function takes in the returned 
// value from data validation function to convert it to
// Kelvin and send the result to stdout
int Convert_from_Fahrenheit(var Tempvalues){
    
    // Get Celcius value.
    // Formula	(32°F − 32) × 5/9 = 0°C
    float celcius = (Tempvalues.num - 32) * 5/9 ;

    // Get the Kelvin value
    // Formula	(32°F − 32) × 5/9 + 273.15 = 273.15K
    float kelvin = (Tempvalues.num - 32) * 5/9 + 273.15;

    // write to stdout
    printf("\n\n");
    printf("\n\tCelcius \t Fahrenheit \t Kelvin");
    printf("\n\t%.2f \t\t %.2f \t\t %.2f\n", celcius, Tempvalues.num, kelvin);

    return 0;
}

