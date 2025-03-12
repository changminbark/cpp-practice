
#include <iostream>

int main() {
	int num{};
	std::cout << "Please enter an integer: ";

	std::cin >> num;

	std::cout << "You entered " << num << '\n';

	std::cout << "Double that number is: " << num * 2 << '\n';

	std::cout << "Triple that number is: " << num * 3 << '\n';

	return 0;
}