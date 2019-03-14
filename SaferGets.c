//
//  SaferGets.c
//  Tempature converter
//
//  Created by Wilfrantz DEDE on 3/6/19.
//  Copyright © 2019 Wilfrantz DEDE. All rights reserved.
/* -------------------------------------------------------------------- */

#include "SaferGets.h"

// Function safer_gets

void safer_gets (char array[], int max_chars)

{
    /* Declare variables. */
    /* ------------------ */
    
    int i;
    
    /* Read info from input buffer, character by character,   */
    /* up until the maximum number of possible characters.    */
    /* ------------------------------------------------------ */
    
    for (i = 0; i < max_chars; i++)
    {
        array[i] = getchar();
        
        
        /* If "this" character is the carriage return, exit loop */
        /* ----------------------------------------------------- */
        
        if (array[i] == '\n')
            
            break;
        
    } /* end for */
    
    /* If we have pulled out the most we can based on the size of array, */
    /* and, if there are more chars in the input buffer,                 */
    /* clear out the remaining chars in the buffer.                      */
    /* ----------------------------------------------------------------  */
    
    if (i == max_chars )
        
        if (array[i] != '\n')
            while (getchar() != '\n');
    
    /* At this point, i is pointing to the element after the last character */
    /* in the string. Terminate the string with the null terminator.        */
    /* -------------------------------------------------------------------- */
    
    array[i] = '\0';
    
    
} // End safer_gets

