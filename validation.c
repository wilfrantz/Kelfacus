
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#include "functions.h"

// Data validation function takes in the user input
// and an integer which is the return staus of the 
// scanf function for data processing.
var data_validation(var value) {
    char answer;
    // Data validation.
    if (value.num == 0) { 
        printf("\nProvided value is equal to 0");
        printf("\nDo you want to continue? (Y/N): ");
        scanf("%c", &answer);

        if (toupper(answer) == 'Y'){
            return value;
        }else if (toupper(answer) == 'N'){
            printf("\nProgram terminated\n");
            exit(0);
        }else{
            printf("\nWrong entry, exit with error.\n");
            exit(3);
        }
    }
    return value;
}
