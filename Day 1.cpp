#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int p, b, h;

	std::cout << "Enter the perpendicular side: ";
	std::cin >> p;

	std::cout << "Enter the base side: ";
	std::cin >> b;

	h = sqrt(pow(p, 2) + pow(b, 2));

	std::cout << "The hypotenuse is " << h << '\n';

	return 0;
}

// Simple hypotenuse calculator for day 1.
// Just learnt some simple stuff like namespaces, variables and how to declare them, and just overall syntax.
