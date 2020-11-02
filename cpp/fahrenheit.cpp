
/* Fahreneit.cpp: 
 * Convert_from_Fahrenheit function takes in the returned 
 * value from data validation function to convert it to
 * Kelvin and send the result to stdout
 * */

#include <iostream>

#include "data.h"

int Var::Convert_from_Fahrenheit(std::string arg)const{

    // class object.
    Var obj;

    // set Fahreneit value.
    obj.setFahrenheit(stof(arg));

    // Get Celcius value Formula (32°F − 32) × 5/9 = 0°C
    obj.setCelcius((obj.getFahrenheit() - 32) * 5/9);

    // Get the Kelvin value
    // Formula	(32°F − 32) × 5/9 + 273.15 = 273.15K
    obj.setKelvin((obj.getFahrenheit() - 32) * 5/9 + 273.15);

    // print function call.
    obj.print(&obj);


    return 0;
}

