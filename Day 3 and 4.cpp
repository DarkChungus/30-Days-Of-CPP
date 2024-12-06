#include <iostream>
#include <ctime>
using namespace std;

void dice(){
	srand(time(NULL));

	int num;
	int n;

	std::cout << "**************************************************************" << "\n";
	
	std::cout << "Please enter what how many dice you want to roll: ";
	std::cin >> n;

	for(int i=1; i<=n; i++){
		num = (rand() % 6) + 1;
		cout  << i << "." << " " << num << '\n';
	}
}

void number_guesser(){
	srand(time(NULL));
	
	int choice;
	int botchoice;
	
	std::cout << "**************************************************************" << "\n";
	std::cout << "Note: This is a random number guesser from 1 to 100." << "\n";


	std::cout << "Enter what number you pick: ";
	std::cin >> choice;

	botchoice = (rand() % 100) + 1;
	
	if(botchoice!=choice){
		std::cout << "You lost! Sorry!" << "\n";
		std::cout << "Bot picked " << botchoice << " while you picked " << choice << "." << "\n";
	}
	else{
		for(int i=0; i<=1000; i++){
			std::cout << "YOU WIN!!! CONGRATULATIONS!!!" << "\n";
		}
	}
		
}

int main(){

	int choice;

	std::cout << "1. Dice roller" << "\n";
	std::cout << "2. Number Guesser" << "\n";

	std::cout << "Please enter what you want to play(1/2): ";
	std::cin >> choice;

	if(choice==1){
		dice();
	}
	else if(choice==2){
		number_guesser();	
	}
	else{
		for(int i=0; i<=1000; i++){
			std::cout << "PLEASE LEARN HOW TO READ!!! ENTER ONLY 1 OR 2!!!";
		}
	}

	return 0;
}

// I apologize for the slacking off yesterday, so heres a (kinda) big program.
// I dont know, it's kinda big for a person who just started c++, plus(pun intended) I dont really care what you think. You're getting this for me missing day 3.
