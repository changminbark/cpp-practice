// CMakewithoutVCPKG.cpp : Defines the entry point for the application.
//

#include "CMakewithoutVCPKG.h"
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>

using namespace std;

int main()
{
	// Test out library
	plog::init(plog::debug, "C:\\Users\\chang\\Desktop\\Github-Projects\\cpp-practice\\CMakewithoutVCPKG\\log\\Logfile.txt");
	PLOGD << "main called";

	cout << "Hello CMake." << endl;
	return 0;
}
