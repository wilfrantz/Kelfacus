

/* -------------------------------------------------------------------- */
//  Basic C program that converts celsius to Fahrenheit and Kelvin.
/* -------------------------------------------------------------------- */

#include <stdio.h>
#include <ctype.h>
#include<stdlib.h>

// Abstract data type definition.
typedef struct {
    float num;
    char arr [100];
} data, var;

// Functions declaration.
int celsius_to_fahrenheit (var);
int celsius_to_kelvin (var);
var data_validation(var, int);

// Main function
int main(void)
{
    // Local variable to store user input (celsius initial value).
    var celsius ;

    // Prompt user for celsius value
    printf("\nPlease enter the temperature in celsius: ");
    int rtn = scanf("%f", &celsius.num);

    // Data validation function call.
    var Celvalues = data_validation(celsius, rtn);

    // Passing celsius value to celius_to_fahrenheit funtion.
    celsius_to_fahrenheit(Celvalues);

    // Passing celsius value to celsius_to_kelvin function.
    celsius_to_kelvin (Celvalues);

    return 0;

} // End main

// Data validation function takes in the user input
// and an integer which is the return staus of the 
// scanf function for data processing.
var data_validation(var Celvalues, int status)
{
    // Local variable declaration.
    int temp, count = 0;
    // Data validation.
    while (status!= 1) {   /* user generates manual EOF */
        while((temp=getchar()) != EOF && temp != '\n');
        printf("\n==>\tInvalid entry, please try again: ");
        status = scanf("%f", &Celvalues.num);
        count++;

        // After 4 attempts, program prompts user with 
        // an error message and exit. (Notice, the attempt from the driver test.)
        if (count == 3){
            printf("\nYou have exceeded the number of allowed attempts.\n");
            exit(2);
        }
    }

    return Celvalues;
}

// celsius to Fahrenheit function takes in the returned 
// value from data validation function to convert it to
// Fahrenheit and send the result to stdout.
int celsius_to_fahrenheit (var Celvalues)
{
    // local variable declaration
    float Fahrenheit = (Celvalues.num * 9/5) + 32;
    // send to stdout
    printf("\nYour temperature in Fahrenheit is : %.2lf°F\n", Fahrenheit);

    return 0;
}

// celsius to Kelvin function takes in the returned 
// value from data validation function to convert it to
// Kelvin and send the result to stdout
int celsius_to_kelvin (var Celvalues)
{
    // local variable declaration.
    float kelvin = Celvalues.num + 273.15;
    // send to stdout
    printf("\nYour temperature in Kelvin is : %.2lf°K\n", kelvin);

    return 0;
}
