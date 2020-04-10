
#include <iostream>

#include "data.h"

int print (Var* obj_Ptr){

    // write to stdout
    std::cout << std::endl;
    std::cout<<"\n\tCelcius: "<<obj_Ptr->getCelcius() << " \n\tFahrenheit: "<<obj_Ptr->getFahrenheit() <<" \n\tKelvin: "<<obj_Ptr->getKelvin()<< std::endl;

    return 0;
}
