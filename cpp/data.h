/* data.h
 * Var class definition.
 * */

#pragma once 

#ifndef _DATAH_
#define _DATAH_

#include <iostream>

class Var {

	public:	
		// Setter functions
		void setCelcius(float celcius) {this->celcius = celcius ; }
		void setFahrenheit (float fahrenheit){this->fahrenheit = fahrenheit; }
		void setKelvin (float kelvin){this->kelvin = kelvin; }

		// Getter functions
		float getCelcius(){return celcius; }
		float getFahrenheit(){return fahrenheit; }
		float getKelvin(){return kelvin; }

		// Member functions declaration.
		int Convert_from_Fahrenheit(std::string)const;
		int Convert_from_Kelvin(std::string)const;
		int print(Var*)const;
		int Convert_from_Celcius(std::string)const;

	private:
		float celcius, fahrenheit, kelvin;
};


#endif // !DATAH


