
/* file : print.cpp
*  Write to stdout.
*/

#include <iostream>

#include "data.hpp"

void Var::print(Var *obj_Ptr) const
{
    // write to stdout
    std::cout << std::endl;
    std::cout << "\n\tCelcius: " << (*obj_Ptr).getCelcius() << " \n\tFahrenheit: " << (*obj_Ptr).getFahrenheit() << " \n\tKelvin: " << (*obj_Ptr).getKelvin() << std::endl;
}
