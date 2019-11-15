

/* -------------------------------------------------------------------- */
//  Basic C program that converts celsius to Fahrenheit and Kelvin.
/* -------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

#define maxarg 3
// Abstract data type definition.
typedef struct {
    float num;
    int n;
    //    char arr [100];
} data, var;

// Functions declaration.
int celsius_to_fahrenheit (var);
int celsius_to_kelvin (var);
int print (var, var, var);
var data_validation(var, int);

// Main function
int main(int argc, char** argv)
{
    // Local variable to store user input (celsius initial value).
    var celsius, kelvin, Fahrenheit;

    /*
       current command line arguments:

       -c Celcius         Celsius value.
       -f Fahrenheit      Fahrenheit value .
       -k Kelvin          Kwlvim value
       */

    if (argc > maxarg){
        printf("Usage: %s -c Celcius or -f Fahrenheit -k Kelvin ]\n",argv[0]);
        exit(1);
    }

    for (int i = 1; i < argc; i+=2) {
        /* check for valid flags (first char should be '-' for flags) */
        if (argv[i][0]!='-') {
            printf("bad option character...should be \"-\"\n");
            exit(2);
        }

        /* check for valid flag value and take appropriate action */
        switch (argv[i][1]) {
            case 'c': celsius.num = atoi(argv[i+1]);
                      break;
            case 'f': Fahrenheit.num = atoi(argv[i+1]);
                      break;
            case 'k': kelvin.num = atoi(argv[i+1]);
                      break;
            default: printf("bad option...should be \"c\" or \"f\" or \"k\"\n");
                     exit(3);
                     break;
        }
    }
    // 
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
    while (status!= 1) { 
        while((temp=getchar()) != EOF && temp != '\n');
        printf("\n==>\tInvalid entry, please try again: ");
        status = scanf("%f", &Celvalues.num);
        count++;

        // After 3 attempts, program prompts user with 
        // an error message and exit. (Notice, the attempt from the driver test.)
        if (count == 2){
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

// The print function display to stdout. It receives the value
// of Celcius, Fahrenheit and Kelvin, create a simple table and 
// print out to the screen.
