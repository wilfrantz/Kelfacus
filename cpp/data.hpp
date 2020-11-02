/* data.hpp
 * Var class definition.
 * */

#pragma once 
#ifndef _DATAHPP_
#define _DATAHPP_

#include <iostream>

class Var {

	public:	

		// Setter 
		void setCelcius(float celcius) {this->celcius = celcius ; }
		void setFahrenheit (float fahrenheit){this->fahrenheit = fahrenheit; }
		void setKelvin (float kelvin){this->kelvin = kelvin; }

		// Getter 
		float getCelcius(){return this->celcius; }
		float getFahrenheit(){return this->fahrenheit; }
		float getKelvin(){return this->kelvin; }

		// Member functions.
		void Convert_from_Fahrenheit(const float);
		void Convert_from_Kelvin(const float);
		void print(Var*)const;
		void Convert_from_Celcius(const float);

	private:
		float celcius, fahrenheit, kelvin;
};


#endif // !DATAHPP


