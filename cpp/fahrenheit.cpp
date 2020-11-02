
/* Fahreneit.cpp: 
 * Convert_from_Fahrenheit function takes in the returned 
 * value from data validation function to convert it to
 * Kelvin and send the result to stdout
 * */

#include <iostream>

#include "data.hpp"

void Var::Convert_from_Fahrenheit(const float arg)
{
    // class object.
    Var obj;
    // set Fahreneit value.
    obj.setFahrenheit(arg);
    // Get Celcius value Formula (32°F − 32) × 5/9 = 0°C
    obj.setCelcius((obj.getFahrenheit() - 32) * 5 / 9);
    // Get the Kelvin value
    // Formula	(32°F − 32) × 5/9 + 273.15 = 273.15K
    obj.setKelvin((obj.getFahrenheit() - 32) * 5 / 9 + 273.15);
    // print  to stdout.
    obj.print(&obj);
}
