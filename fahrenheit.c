

#include <stdio.h>
#include "functions.h"

// celsius to Kelvin function takes in the returned 
// value from data validation function to convert it to
// Kelvin and send the result to stdout
int Convert_from_Fahrenheit(var Tempvalues){

    // Get Celcius value.
    // Formula	(32°F − 32) × 5/9 = 0°C
    var celcius, kelvin; 
    celcius.num = (Tempvalues.num - 32) * 5/9 ;

    // Get the Kelvin value
    // Formula	(32°F − 32) × 5/9 + 273.15 = 273.15K
        kelvin.num = (Tempvalues.num - 32) * 5/9 + 273.15;

    // Print function call.
    print(celcius, Tempvalues, kelvin);

    return 0;
}

