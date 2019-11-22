

#include <stdio.h>
#include "functions.h"

// celsius to Kelvin function takes in the returned 
// value from data validation function to convert it to
// Kelvin and send the result to stdout
int Convert_from_Kelvin(var Tempvalues){

    // Get Celcius value.
    float celcius = (Tempvalues.num - 273.15);

    // Get the Kelvin value
    // Formula	(32°F − 32) × 5/9 + 273.15 = 273.15K
    float fahrenheit = (Tempvalues.num - 273.15) * 9/5 + 32 ;

    // write to stdout
    printf("\n\n");
    printf("\n\tCelcius: %.2f \n\tFahrenheit: %.2f \n\tKelvin: %.f\n", celcius, fahrenheit, Tempvalues.num);


    return 0;
}

