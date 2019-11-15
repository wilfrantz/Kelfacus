

/* -------------------------------------------------------------------- */
//  Basic C program that converts celsius to Fahrenheit and Kelvin.
/* -------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define maxarg 3
// Abstract data type definition.
typedef struct {
    float num;
    int n;
} data, var;

// Functions declaration.
int Convert_from_Celcius(var);
var data_validation(var);
int print (var, var, var);
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

    if (argc > maxarg){
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
                      break;
            case 'k': Kelvin.num = atof(argv[i+1]);
                      // Data validation function call.
                      Tempvalues = data_validation(Kelvin);
                      break;
            default: printf("\nbad option...should be \"-c\" or \"-f\" or \"-k\"\n");
                     exit(3);
                     break;
        }
    }

    return 0;

} // End main

// Data validation function takes in the user input
// and an integer which is the return staus of the 
// scanf function for data processing.
var data_validation(var value)
{
    char answer;
    // Data validation.
    if (value.num == 0) { 
        printf("\nProvided value is equal to 0");
        printf("\nDo you want to continue?(y/n): ");
        scanf("%c", &answer);
    }
    if (toupper(answer) == 'N'){
        exit(3);
    }else{
        return value;
    }
}

// celsius to Fahrenheit function takes in the returned 
// value from data validation function to convert it to
// Fahrenheit and send the result to stdout.
int Convert_from_Celcius(Tempvalues)
{
    // local variable declaration
    float Fahrenheit = (Tempvalues.num * 9/5) + 32;
    // send to stdout
    printf("\nYour temperature in Fahrenheit is : %.2lf°F\n", Fahrenheit);

    float kelvin = Tempvalues.num + 273.15;
    // send to stdout
    printf("\nYour temperature in Kelvin is : %.2lf°K\n", kelvin);

    return 0;
}

// celsius to Kelvin function takes in the returned 
// value from data validation function to convert it to
// Kelvin and send the result to stdout
int celsius_to_kelvin (var Tempvalues)
{
    // local variable declaration.
    float kelvin = Tempvalues.num + 273.15;
    // send to stdout
    printf("\nYour temperature in Kelvin is : %.2lf°K\n", kelvin);

    return 0;
}

// The print function display to stdout. It receives the value
// of Celcius, Fahrenheit and Kelvin, create a simple table and 
// print out to the screen.
