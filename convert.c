

/* -------------------------------------------------------------------- */
//  Basic C program that converts Celcius to Fahrenheit and Kelvin.
/* -------------------------------------------------------------------- */

#include <stdio.h>
#include <ctype.h>

// Abstract data type definition.
typedef struct {
    float num;
    char arr [100];
} data, var;

// Functions declaration.
int celcius_to_fahrenheit (var);
int celcius_to_kelvin (var);
var data_validation(var);

// Main function
int main(void)
{
    // Variable declaration
    var celcius ;

    // Prompt user for celcius value
    printf("\nPlease enter the temperature in Celcius: ");
    scanf("%f", &celcius.num);

    // Data validation function call.
    data_validation(celcius);

    // Passing celcius value to celius_to_fahrenheit funtion.
    celcius_to_fahrenheit(celcius);

    // Passing celcius value to celcius_to_kelvin function.
    celcius_to_kelvin (celcius);

    return 0;

} // End main

// Data validation function.
var data_validation(var celcius)
{
    // #TODO fix data validation bug
    // Data validation
    while (isdigit(celcius.num) != 0)
    {
        printf ("\nInvalid entry. Please try again: ");
        scanf("%f", &celcius.num);
    }

    return celcius;
}

// celcius to Fahrenheit function definition.
int celcius_to_fahrenheit (var celcius)
{
    float Fahrenheit= (celcius.num * 9/5) + 32;

    printf("\nYour temperature in Fahrenheit is : %.2lf°F\n", Fahrenheit);

    return 0;
}

// celcius to Kelvin function definition.
int celcius_to_kelvin (var celcius)
{
    float kelvin = celcius.num + 273.15;
    printf("\nYour temperature in Kelvin is : %.2lf°K\n", kelvin);

    return 0;
}
