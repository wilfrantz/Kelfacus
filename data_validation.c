//
//  data_validation.c
//  Tempature converter
//  Created by Wilfrantz DEDE on 3/7/19.
//  Copyright © 2019 Wilfrantz DEDE. All rights reserved.

#include <stdio.h>
#include <stdbool.h>
double data_validation(double celcius)
    {
    // Data validation
    while (isdigit (celcius) == false)
    {
        printf ("\nInvalid entry. Please try again: ");
        scanf("%lf", &celcius);
    }
    return celcius;
}
