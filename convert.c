

/* -------------------------------------------------------------------- */
//  Basic C program that converts Celcius to Fahrenheit and Kelvin.
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
int celcius_to_fahrenheit (var);
int celcius_to_kelvin (var);
var data_validation(var, int);

// Main function
int main(void)
{
    // Local variable to store user input (celcius initial value).
    var celcius ;

    // Prompt user for celcius value
    printf("\nPlease enter the temperature in Celcius: ");
    int rtn = scanf("%f", &celcius.num);

    // Data validation function call.
    var Celvalues = data_validation(celcius, rtn);

    // Passing celcius value to celius_to_fahrenheit funtion.
    celcius_to_fahrenheit(Celvalues);

    // Passing celcius value to celcius_to_kelvin function.
    celcius_to_kelvin (Celvalues);

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

// celcius to Fahrenheit function definition.
int celcius_to_fahrenheit (var Celvalues)
{
    // local varible declaration
    float Fahrenheit= (Celvalues.num * 9/5) + 32;
    // send to stdout
    printf("\nYour temperature in Fahrenheit is : %.2lf°F\n", Fahrenheit);

    return 0;
}

// celcius to Kelvin function definition.
int celcius_to_kelvin (var Celvalues)
{
    // local variable declaration.
    float kelvin = Celvalues.num + 273.15;
    // send to stdout
    printf("\nYour temperature in Kelvin is : %.2lf°K\n", kelvin);

    return 0;
}
