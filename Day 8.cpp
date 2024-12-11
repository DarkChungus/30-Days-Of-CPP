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
 
int four_determinant(int m[4][4]){
	int a, b, c, d, e, f, g, h, i, j, k, l, mn, n, o, p, det_a[3][3], det_e[3][3], det_i[3][3], det_m[3][3], final_determinant;
 
	m[0][0] = a;
	m[0][1] = b;
	m[0][2] = c;
	m[0][3] = d;
 
	m[1][0] = e;
	m[1][1] = f;
	m[1][2] = g;
	m[1][3] = h;
 
	m[2][0] = i;
	m[2][1] = j;
	m[2][2] = k;
	m[2][3] = l;
 
	m[3][0] = mn;
	m[3][1] = n;
	m[3][2] = o;
	m[3][3] = p;
 
	// First determinant
 
	det_a[0][0] = f;
	det_a[0][1] = g;
	det_a[0][2] = h;
	det_a[1][0] = j;
	det_a[1][1] = k;
	det_a[1][2] = l;
	det_a[2][0] = n;
	det_a[2][1] = o;
	det_a[2][2] = p;
 
	// Second Determinant
 
	det_e[0][0] = b;
	det_e[0][1] = c;
	det_e[0][2] = d;
	det_e[1][0] = j;
	det_e[1][1] = k;
	det_e[1][2] = l;
	det_e[2][0] = n;
	det_e[2][1] = o;
	det_e[2][2] = p;
 
	// Third Deternminant
 
	det_i[0][0] = b;
	det_i[0][1] = c;
	det_i[0][2] = d;
	det_i[1][0] = f;
	det_i[1][1] = g;
	det_i[1][2] = h;
	det_i[2][0] = n;
	det_i[2][1] = o;
	det_i[2][2] = p;
 
	// Fourth Determinant
 
	det_m[0][0] = b;
	det_m[0][1] = c;
	det_m[0][2] = d;
	det_m[1][0] = f;
	det_m[1][1] = g;
	det_m[1][2] = h;
	det_m[2][0] = j;
	det_m[2][1] = k;
	det_m[2][2] = l;
 
	final_determinant = (a * three_determinant(det_a)) - (e * three_determinant(det_e)) + (i * three_determinant(det_i)) - (mn * three_determinant(det_m));
 
	return final_determinant;
 
}
 
int main(){
 
	int choice;
 
	std::cout << "1. Determinant of 2x2 Matrix" << "\n";
	std::cout << "2. Determinant of 3x3 Matrix" << "\n";
	std::cout << "3. Determinant of 4x4 Matrix" << "\n";
 
	std::cout << "Which one would you like to operate(1/2/3)? ";
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
	else if(choice==3){
 
		int a, b, c, d, e, f, g, h, i, j, k, l, mn, n, o, p, m[4][4], determinant;
 
		std::cout << "***************************************************" << "\n";
 
		std::cout << "a b c d" <<"\n";
		std::cout << "e f g h" << "\n";
		std::cout << "i j k l" << "\n";
		std::cout << "m n o p" << "\n";
 
		std::cout << "" <<"\n";
		std::cout << "This is the way that the matrix will be inputted." << "\n";
 
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
 
		std::cout << "Enter j: ";
		std::cin >> j;
 
		std::cout << "Enter k: ";
		std::cin >> k;
 
		std::cout << "Enter l: ";
		std::cin >> l;
 
		std::cout << "Enter m: ";
		std::cin >> mn;
 
		std::cout << "Enter n: ";
		std::cin >> n;
 
		std::cout << "Enter o: ";
		std::cin >> o;
 
		std::cout << "Enter p: ";
		std::cin >> p;
 
		m[0][0] = a;
		m[0][1] = b;
		m[0][2] = c;
		m[0][3] = d;
 
		m[1][0] = e;
		m[1][1] = f;
		m[1][2] = g;
		m[1][3] = h;
 
		m[2][0] = i;
		m[2][1] = j;
		m[2][2] = k;
		m[2][3] = l;
 
		m[3][0] = mn;
		m[3][1] = n;
		m[3][2] = o;
		m[3][3] = p;
 
		determinant = four_determinant(m);
 
		std::cout << "The determinant of the 4x4 matrix is " << determinant << "." << "\n";	
 
	}
	else{
		std::cout << "Learn how to enter numbers properly you idiot" << "\n";
	}
 
	return 0;
 
}

// HAHAHAHAHAHAHA
// See you all next program! Day 9 is going to be very modest, probably. Maybe a CSES Problem, maybe LeetCode, maybe project euler. :)
