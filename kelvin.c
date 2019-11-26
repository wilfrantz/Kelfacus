

#include <stdio.h>
#include "functions.h"

// celsius to Kelvin function takes in the returned 
// value from data validation function to convert it to
// Kelvin and send the result to stdout
int Convert_from_Kelvin(var Tempvalues){

    // Get Celcius value.
    var celcius, fahrenheit;
    celcius.num = (Tempvalues.num - 273.15);

    // Get the Kelvin value
    // Formula	(32°F − 32) × 5/9 + 273.15 = 273.15K
    fahrenheit.num = (Tempvalues.num - 273.15) * 9/5 + 32 ;

    // print function call
    print (fahrenheit, celcius, Tempvalues);

    return 0;
}

