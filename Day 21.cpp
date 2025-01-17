#include <iostream>
using namespace std;

struct Pet{
	string animal;
	string breed;
	string name;
	int age;
	string favFood;
};

enum energyLevel{
	LOW = 1,
	HIGH = 2
};

int main(){
	Pet userPet;
	cout << "PETS!!!!!!!" << endl;

	cout << "What kind of pet do you have? ";
	cin >> userPet.animal;

	cout << "What is your pet's breed? ";
	cin >> userPet.breed;

	cout << "Good! You're doing very good so far." << endl;

	cout << "What is your pet's name? ";
	cin >> userPet.name;

	cout << "What is your pet's age? ";
	cin >> userPet.age;

	cout << "What is your pet's favorite food? ";
	cin >> userPet.favFood;

	int choice;

	cout << "Press 1 if your pet has low energy level, and 2 if your pet has high energy levels: ";
	cin >> choice;
	cout << endl;

	if(choice==1){
		enum energyLevel energy = LOW;
		if(energy==1){
			cout << "You have a " << "lazy " << userPet.breed << " " << userPet.animal << " called " << userPet.name << " who loves to eat " << userPet.favFood << "." << endl;
		}
	}
	else if(choice==2){
		enum energyLevel energy = HIGH;
		if(energy==2){
			cout << "You have a " << "very energetic " << userPet.breed << " " << userPet.animal << " called " << userPet.name << " who loves to eat " << userPet.favFood << "." << endl;
		}
	}
	else{
		cout << "Sorry! Looks like you chose an invalid option!" << endl;
		exit(0);
	}
	return 0;
}
