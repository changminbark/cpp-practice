#include "add.h"
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

int getIntFromUser() 
{
	PLOGD << "getIntFromUser() called";

	std::cout << "Please enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

void printDouble(int value) 
{
	PLOGD << "printDouble() called";

	std::cout << value << " doubled is " << value * 2 << '\n';
}

int main() 
{
	plog::init(plog::debug, "Logfile.txt");

	PLOGD << "main() called";

	int x{ getIntFromUser() };
	int y{ getIntFromUser() };

	std::cout << x << " + " << y << " = " << add(x, y) << '\n';

	printDouble(x);
	printDouble(y);

	return 0;
}