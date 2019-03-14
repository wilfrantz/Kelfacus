//
//  data_validation.c
//  Tempature converter
//
//  Created by Wilfrantz DEDE on 3/7/19.
//  Copyright © 2019 Wilfrantz DEDE. All rights reserved.
//

#include <stdio.h>



double data_validation(double celcius)

{

// Variable declaration
    
    char c;
    
// Data validation
    
  
   
    while ( !isdigit (celcius) == 0)
        
    {
        printf ("\nInvalid entry. Please try again: ");
        scanf("%lf", &celcius);
        while ( (c = getchar() != '\n') && c != EOF); // clear input buffer.
        
    }
    
    
    

    
 return celcius;
  
}
