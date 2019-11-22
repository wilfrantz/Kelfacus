
#include <stdio.h>
#include "functions.h"

// celsius to Fahrenheit function takes in the returned 
// value from data validation function to convert it to
// Fahrenheit and send the result to stdout.
int Convert_from_Celcius(var Tempvalues){

    // Get Fahrenheit value.
    var Fahrenheit;
    Fahrenheit.num = (Tempvalues.num * 9/5) + 32;

    // Get the Kelvin value
    var kelvin;
    kelvin.num = Tempvalues.num + 273.15;

    // Print function call.
    print(Tempvalues, Fahrenheit, kelvin);
    /*
    // write to stdout
    printf("\n\n");
    printf("\n\tCelcius: %.2f \n\tFahrenheit: %.2f \n\tKelvin: %.f\n", Tempvalues.num, Fahrenheit.num, kelvin.num);
    */
    return 0;
}

