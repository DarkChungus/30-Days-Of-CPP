#include <iostream>
using namespace std;

int two_determinant(int a[2][2]){

	// Function that returns the 2x2 matrix's determinant.

	int ad, bc, det;

	ad = a[0][0] * a[1][1];
	bc = a[0][1] * a[1][0];

	det = ad - bc;

	return det;
}

int three_determinant(int m[3][3]){
	
	// Defining the terms

	int a, b, c, d, e, f, g, h, i, det_a[2][2], det_b[2][2], det_c[2][2];
	
	// Standard letters used for 3x3 matrix.

	a = m[0][0];
	b = m[0][1];
	c = m[0][2];
	d = m[1][0];
	e = m[1][1];
	f = m[1][2];
	g = m[2][0];
	h = m[2][1];
	i = m[2][2];

	// The determinants of the 2x2 matrices involved.

	det_a[0][0] = e;
	det_a[0][1] = f;
	det_a[1][0] = h;
	det_a[1][1] = i;

	det_b[0][0] = d;
	det_b[0][1] = f;
	det_b[1][0] = g;
	det_b[1][1] = i;

	det_c[0][0] = d;
	det_c[0][1] = e;
	det_c[1][0] = g;
	det_c[1][1] = h;
	
 	// The three components of the 3x3 matrix determinant

	int first, second, third, final_determinant;

	first = a * two_determinant(det_a);
	second = b * two_determinant(det_b);
	third = c * two_determinant(det_c);

	final_determinant = first - second + third;

	return final_determinant;	

}

int main(){
	
	int choice;

	std::cout << "1. Determinant of 2x2 Matrix" << "\n";
	std::cout << "2. Determinant of 3x3 Matrix" << "\n";

	std::cout << "Which one would you like to operate(1/2)? ";
	std::cin >> choice;

	if(choice==1){

		int a, b, c, d, m[2][2], determinant;

		std::cout << "*************************************" << "\n";
		std::cout << "a b" << "\n";
		std::cout << "c d" << "\n";
		std::cout << "" << "\n";
		std::cout << "This is the way that matrices will be inputted." << "\n";

		std::cout << "Enter a: ";
		std::cin >> a;

		std::cout << "Enter b: ";
		std::cin >> b;

		std::cout << "Enter c: ";
		std::cin >> c;

		std::cout << "Enter d: ";
		std::cin >> d;

		m[0][0] = a;
		m[0][1] = b;
		m[1][0] = c;
		m[1][1] = d;

		determinant = two_determinant(m);

		std::cout << "The determinant of the matrix is " << determinant << "." << "\n";
	
	}
	else if(choice==2){
		int a, b, c, d, e, f, g, h, i, m[3][3], determinant;

		std::cout << "*************************************" << "\n";
		std::cout << "a b c" << "\n";
		std::cout << "d e f" << "\n";
		std::cout << "g h i" << "\n";
		std::cout << "This is the way that matrices will be inputted." << "\n";

		std::cout << "Enter a: ";
		std::cin >> a;

		std::cout << "Enter b: ";
		std::cin >> b;

		std::cout << "Enter c: ";
		std::cin >> c;

		std::cout << "Enter d: ";
		std::cin >> d;

		std::cout << "Enter e: ";
		std::cin >> e;

		std::cout << "Enter f: ";
		std::cin >> f;

		std::cout << "Enter g: ";
		std::cin >> g;

		std::cout << "Enter h: ";
		std::cin >> h;

		std::cout << "Enter i: ";
		std::cin >> i;

		m[0][0] = a;
		m[0][1] = b;
		m[0][2] = c;
		m[1][0] = d;
		m[1][1] = e;
		m[1][2] = f;
		m[2][0] = g;
		m[2][1] = h;
		m[2][2] = i;

		determinant = three_determinant(m);

		std::cout << "The determinant of the 3x3 matrix is " << determinant << "." << "\n";

	}
	else{
		std::cout << "Learn how to enter numbers properly you idiot" << "\n";
	}

	return 0;

}

// Holy crap, this actually works. I was not expecting to get it first try, but I guess I'm just built like that ¯\_(ツ)_/¯
// In my opinion, this is a lot for just day 6 of learning C++.
// As said before though, I do not really give a care. I'm just proud to do all this on day 6.
// It doesn't really surprise me though, as I do have experience in C and other languages.
// Still, its really cool to see that I was able to whip this program up. See you all next program!
