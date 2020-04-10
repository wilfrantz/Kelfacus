

#include <iostream>

#include "data.h"

// celsius to Kelvin function takes in the returned 
// value from data validation function to convert it to
// Kelvin and send the result to stdout
int Convert_from_Kelvin(char* arg){

    // Class object
    Var obj;

    // set Kelvin value
    obj.setKelvin(atof(arg));

    // Set Celcius value.
    obj.setCelcius (obj.getKelvin() - 273.15);

    // Get the Fahrenheit value
    // Formula	(32°F − 32) × 5/9 + 273.15 = 273.15K
    obj.setFahrenheit((obj.getKelvin() - 273.15) * 9/5 + 32);

    // Print function call.
    print(&obj);


    return 0;
}

