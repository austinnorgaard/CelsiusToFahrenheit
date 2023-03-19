#include <iostream>
#include <iomanip>

int main () {
	std::string title = "Celsius to Fahrenheit Converter";
	double F, C = 0;

	std::cout << title << std::endl;

	std::cout << std::setfill ('-') << std::setw (title.length ()) << '-' << std::endl;

	std::cout << "Enter a temperature in degrees Celsius to convert to Fahrenheit: ";
	std::cin >> C;

	F = (9.0 / 5.0) * C + 32.0;

	std::cout << std::endl << "Your temperature in degrees Fahrenheit is: " << F;

	return EXIT_SUCCESS;
}