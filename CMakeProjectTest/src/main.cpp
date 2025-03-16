#include <fmt/core.h>
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

int main()
{
	plog::init(plog::debug, "Logfile.txt");
	// plot::init(plog::none, "Logfile.txt"); This is for when you want to disable logging

	PLOGD << "main() called";

	fmt::print("Hello world!\n");

	std::cout << "Press Enter to exit\n";

	std::cin.get();
	
	return 0;
}