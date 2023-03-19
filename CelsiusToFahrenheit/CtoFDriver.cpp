#include <iostream>
#include <iomanip>

int main () {
	std::string title1 = "Celsius to Fahrenheit Converter", title2 = "Fahrenheit to Celsius Converter";
	int option = 0;
	double F, C = 0;

	std::cout << "Celsius to Fahrenheit (1) or Fahrenheit to Celsius (2)" << std::endl;
	
	while (option != 1 && option != 2) {
		std::cin >> option;
	}

	std::system ("CLS");

	if (option == 1) {
		std::cout << title1 << std::endl;

		std::cout << std::setfill ('-') << std::setw (title1.length ()) << '-' << std::endl;

		std::cout << "Enter a temperature in degrees Celsius to convert to Fahrenheit: ";
		std::cin >> C;

		F = (9.0 / 5.0) * C + 32.0;

		std::cout << std::endl << "Your temperature in degrees Fahrenheit is: " << F;
	}
	else {
		std::cout << title2 << std::endl;

		std::cout << std::setfill ('-') << std::setw (title2.length ()) << '-' << std::endl;

		std::cout << "Enter a temperature in degrees Fahrenheit to convert to Celsius: ";
		std::cin >> F;

		C = (F - 32.0) * (5.0 / 9.0);

		std::cout << std::endl << "Your temperature in degrees Celsius is: " << C;
	}

	return EXIT_SUCCESS;
}