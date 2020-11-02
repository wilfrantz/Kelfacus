
/*
 * main.cpp:
 * Basic C++ program that converts celsius 
 * to Fahrenheit and Kelvin.
 * */

#include <iostream>

#include "data.hpp"

int main(int argc, char** argv){

	// Control flow
	if (argc != 3){
		std::cerr <<"Wrong number of arguments"<<std::endl;
		exit(1);
	}
	for (int i = 1; i < argc; i+=2) {
		// Check valid flags (first char should be '-' for flags)
		if (argv[i][0]!='-') {
			std::cerr <<"\nBad option: switch character should be '-'"<<std::endl;
			exit(2);
		}
		// std::string argument = argv[2];
		float argument = std::strtof(argv[2], NULL);
			Var obj;
		switch (argv[i][1]){
			case 'c' : obj.Convert_from_Celcius(argument);
				   break;
			case 'f' : obj.Convert_from_Fahrenheit(argument);
				   break;
			case 'k' : obj.Convert_from_Kelvin(argument);
				   break;
			default: printf("\nbad option... should be \"-c\" or \"-f\" or \"-k\"\n");
		}
	}
	return 0;
}
