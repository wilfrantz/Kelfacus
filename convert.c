

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


// simple helper-function to empty stdin.
void empty_stdin (void){
    // local variable
    int c = getchar();

    while (c != '\n' && c != EOF) c = getchar();
}
// Functions declaration.
int celcius_to_fahrenheit (var);
int celcius_to_kelvin (var);
var data_validation(var);

// Main function
int main(void)
{
    // Local variable to hold user input (celcius initial value).
    var celcius ;

    // Prompt user for celcius value
    printf("\nPlease enter the temperature in Celcius: ");
    scanf("%f", &celcius.num);

    // Data validation.
    while () {   /* user generates manual EOF */
        printf("\nInvalid entry, please try again: ");
        scanf("%f", &celcius.num);
    }
    empty_stdin();



    // Data validation function call.
    //    var Celvalues = data_validation(celcius);

    // Passing celcius value to celius_to_fahrenheit funtion.
    celcius_to_fahrenheit(celcius);

    // Passing celcius value to celcius_to_kelvin function.
    celcius_to_kelvin (celcius);

    return 0;

} // End main


// Data validation function.
var data_validation(var Celvalues)
{
    // #TODO fix data validation infinite loop bug
    // Data validation

    while (Celvalues.num == 0)
    {
        printf("\nInvalid entry, please try again: ");
        scanf("%f", &Celvalues.num);
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
