
/* celsius to Fahrenheit function takes in the returned 
 * value from data validation function to convert it to 
 * Fahrenheit and send the result to stdout. 
 * */

#include <iostream>

#include "data.hpp"

void Var::Convert_from_Celcius(const float arg)
{
	// Class Var object.
	Var obj;
	// Set Celcius value.
	obj.setCelcius(arg);
	// Get Fahrenheit value
	obj.setFahrenheit((obj.getCelcius() * 9 / 5) + 32);
	// Get Kelvin value.
	obj.setKelvin(obj.getCelcius() + 273.15);
	// Print result to stdout.
	obj.print(&obj);
}
