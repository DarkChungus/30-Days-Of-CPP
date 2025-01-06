// HELLO! I am back now, I feel refreshed, the reason I've been gone for almost 3 weeks is, I've felt stressed, I was sick to the point I couldn't walk, and so I just decided to take some
// rest. Anyways, today I'll start slow, but here's some OOP practice :p

#include <bits/stdc++.h>
using namespace std;

class Car{
	public:
		void display();

		void speed(){
			int randSpeed = rand() % 101;
			cout << randSpeed << "\n";
		}
		
		string brand;
		string model;
		int year;
};

void Car::display(){
	cout << "You are now about to see some cars!" << "\n";
}

int main(){
	Car car1;
	Car car2;

	car1.display();

	cout << "\n";
	
	car1.brand = "Toyota";
	car1.model = "Supra";
	car1.year = 2021;

	car2.brand = "Renault";
	car2.model = "Kwid";
	car2.year = 2018;

	cout << car1.brand << "\n";
	cout << car1.model << "\n";
	cout << car1.year << "\n";
	car1.speed();

	cout << "\n";

	cout << car2.brand << "\n";
	cout << car2.model << "\n";
	cout << car2.year << "\n";
	car2.speed();

	return 0;
}
