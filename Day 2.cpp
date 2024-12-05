#include <iostream>
using namespace std;

int main(){
	int choice;
	double n1;
	double n2;
	double res;

	std::cout << "Please enter a number: ";
	std::cin >> n1;

	std::cout << "Please enter a number: ";
	std::cin >> n2;

	std::cout << "1. Addition" << '\n';
	std::cout << "2. Subtraction" << '\n';
	std::cout << "3. Multiplication" << '\n';
	std::cout << "4. Division" << '\n';

	std::cout << "Which operator would you like to use? ";
	std::cin >> choice;

	if(choice==1){
		res = n1 + n2;
		std::cout << n1 << " plus " << n2 << " is " << '\n';
		std::cout << res << '\n';		
	}
	else if(choice==2) {
		res = n1 - n2;
		std::cout << n1 << " minus " << n2 << " is " << '\n';
		std::cout << res << '\n';
	}
	else if(choice==3) {
		res = n1 * n2;
		std::cout << n1 << " multiplied by " << n2 << " is " << '\n';
		std::cout << res << '\n';
	}
	else if(choice==4) {
		res = n1 / n2;
		std::cout << n1 << " divided by " << n2 << " is " << '\n';
		std::cout << res << '\n';
	}
	else{
		std::cout << "Please enter a number 1-4!" << '\n';
	}
}

// Simple calculator program lol
// whenever u are learning a new language, it is a must to make a calculator program :o
