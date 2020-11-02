

#include <iostream>

#include "data.hpp"

// celsius to Kelvin function takes in the returned
// value from data validation function to convert it to
// Kelvin and send the result to stdout
void Var::Convert_from_Kelvin(const float arg)
{
    // Class object
    Var obj;
    // set Kelvin value
    obj.setKelvin(arg);
    // Set Celcius value.
    obj.setCelcius(obj.getKelvin() - 273.15);
    // Get the Fahrenheit value
    // Formula	(32°F − 32) × 5/9 + 273.15 = 273.15K
    obj.setFahrenheit((obj.getKelvin() - 273.15) * 9 / 5 + 32);
    // Print function call.
    obj.print(&obj);
}
