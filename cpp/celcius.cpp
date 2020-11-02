

/* celsius to Fahrenheit function takes in the returned 
 * value from data validation function to convert it to 
 * Fahrenheit and send the result to stdout. 
 * */

#include <iostream>

#include "data.h"


int Var::Convert_from_Celcius(std::string arg)const{

	// Class Var object.
	Var obj;

	// Set Celcius value.
	obj.setCelcius(stof(arg));

	// Get Fahrenheit value
	obj.setFahrenheit ((obj.getCelcius() * 9/5) + 32);

	// Get Kelvin value.
	obj.setKelvin (obj.getCelcius() + 273.15);

	// print function call.
	obj.print(&obj);

	return 0;
}
