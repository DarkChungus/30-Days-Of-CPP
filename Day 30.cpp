#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int p, b, h;
	cout << "Enter perpendicular side: ";
	cin >> p;
	cout << "Enter base side: ";
	cin >> b;
	h = sqrt(pow(p, 2) + pow(b, 2));
	cout << "The hypotenuse is: " << h << endl;
	return 0;
}

// Happy note :) The first program I ever made in C++, apart from the obvious "Hello World!" program. This month has been a great learning experience, and it's really cool to see how cool C++ is. Well, that's the end of this journey! o7
