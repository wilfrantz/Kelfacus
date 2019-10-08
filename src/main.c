
//  Temperature converter
//
//  This program converts Celcius to Fahrenheit and Kelvin.
//
//  Created by Wilfrantz DEDE on 3/6/19.
//
//  Copyright © 2019 Wilfrantz DEDE. All rights reserved.

/* -------------------------------------------------------------------- */

#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Main function
int main()

{

    // Variable declaration

    double celcius;

    // Prompt user for information

    printf("\nPlease enter the Temperature in Celcius: ");
    scanf("%lf", &celcius);
    // while ( (c = getchar() != '\n') && c != EOF); // clear input buffer.


    // Data validation

    data_validation(celcius);


    // Passing value to function celius_to_fahrenheit

    celcius_to_fahrenheit(celcius);


    printf("\n Your Temperature in Fahrenheit is : %.2lf", celcius_to_fahrenheit(celcius) );


    printf("\n\n Your Temperature in Kelvin is : %.2lf \n\n", celcius_to_kelvin (celcius) );

    return 0;

} // End main

