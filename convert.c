

/* -------------------------------------------------------------------- */
//  Basic C program that converts celsius to Fahrenheit and Kelvin.
/* -------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "functions.h"

// Defince max number of
// command line arguments.
#define maxarg 3

// Main function
int main(int argc, char** argv)
{
    // Local variable to store user input.
    var Celsius, Kelvin, Fahrenheit, Tempvalues;

    /*
       current command line arguments:
       -------------------------------------
       -c Celcius         Celsius value.
       -f Fahrenheit      Fahrenheit value .
       -k Kelvin          Kelvin value
       */

    if (argc != maxarg){
        printf("\nUsage: %s -c Celcius or -f Fahrenheit -k Kelvin ]\n",argv[0]);
        exit(1);
    }

    for (int i = 1; i < argc; i+=2) {
        /* check for valid flags (first char should be '-' for flags) */
        if (argv[i][0]!='-') {
            printf("\nbad option character...should be \"-\"\n");
            exit(2);
        }

        /* check for valid flag value and take appropriate action */
        switch (argv[i][1]) {
            case 'c': Celsius.num = atof(argv[i+1]);
                      // Data validation function call.
                      Tempvalues = data_validation(Celsius);
                      // Passing celsius value to
                      // Convert_from_Celcius funtion.
                      Convert_from_Celcius(Tempvalues);
                      break;
            case 'f': Fahrenheit.num = atof(argv[i+1]);
                      // Data validation function call.
                      Tempvalues = data_validation(Fahrenheit);
                      Convert_from_Fahrenheit(Tempvalues);
                      break;
            case 'k': Kelvin.num = atof(argv[i+1]);
                      // Data validation function call.
                      Tempvalues = data_validation(Kelvin);
                      Convert_from_Kelvin(Tempvalues);
                      break;
            default: printf("\nbad option...should be \"-c\" or \"-f\" or \"-k\"\n");
                     exit(3);
                     break;
        }
    }

    return 0;

} // End main

