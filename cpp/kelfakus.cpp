
/*
 * main.cpp:
 * Basic C++ program that converts celsius 
 * to Fahrenheit and Kelvin.
 * */

#include <iostream>

#include "data.h"

int main(int argc, char** argv){

	// Control flow
	if (argc != 3){
		std::cout <<"Wrong number of arguments"<<std::endl;
		exit(1);
	}

	for (int i = 1; i < argc; i+=2) {

		// Check valid flags (first char should be '-' for flags)
		if (argv[i][0]!='-') {
			std::cout <<"\nBad option: switch character should be '-'"<<std::endl;
			exit(2);
		}

		switch (argv[i][1]){
			case 'c' : Convert_from_Celcius(argv[2]);
					   break;
			case 'f' : Convert_from_Fahrenheit(argv[2]);
					   break;
			case 'k' : Convert_from_Kelvin(argv[2]);
					   break;

			default: printf("\nbad option...should be \"-c\" or \"-f\" or \"-k\"\n");
					 exit(3);

		}
	}

	return 0;
}
