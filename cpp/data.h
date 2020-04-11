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
		void setCelcius(float cel) {celcius = cel ; }
		void setFahrenheit (float fa){fahrenheit = fa; }
		void setKelvin (float kel){kelvin = kel; }

		// Getter functions
		float getCelcius(){return celcius; }
		float getFahrenheit(){return fahrenheit; }
		float getKelvin(){return kelvin; }

		// Functions declaration.
		int Convert_from_Fahrenheit(std::string);
		int Convert_from_Kelvin(std::string);
		int print (Var*);
		int Convert_from_Celcius(std::string);

	private:
		float celcius, fahrenheit, kelvin;
};


#endif // !DATAH


