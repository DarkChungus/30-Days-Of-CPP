#include <iostream>
#include <vector>
using namespace std;

int main(){
	int points = 0;
	cout << "QUIZ GAME!!!" << endl;
	cout << endl;
	cout << "Barack obama was the __th president of the United States." << endl;
	cout << "1. 44" << endl;
	cout << "2. 45" << endl;
	cout << "3. 34" << endl;
	cout << "4. 47" << endl;
	cout << "Enter your option here: ";
	cout << endl;
	int choice1;
	cout << choice1;
	if(choice1==1){
		cout << "GREAT WORK! You got one point!" << endl;
		points++;
	}
	else{
		cout << "you suck lol" << endl;
	}
	cout << "What is the integer value of the fourth root of 4/13.5? ";
	int choice2;
	cin >> choice2;
	cout << endl;
	if(choice2==(2/3)){
		cout << "THAT IS CORRECT! You got one point!" << endl;
		points++;
	}
	else{
		cout << "you suck lol" << endl;
	}
	cout << "What is the time complexity of the Bubble Sort algorithm?" << endl;
	cout << "1. O(n)" << endl;
	cout << "2. O(n^2)" << endl;
	cout << "3. O(1)" << endl;
	cout << "Enter your choice here: ";
	int choice3;
	cin >> choice3;
	if(choice3==2){
		cout << "GOOD JOB! You got one point!" << endl;
	}
	else{
		cout << "you suck lol" << endl;
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Wanna see a cool array of 50 elements being sorted? I know you do :)" << endl;
	vector<int> array;
	for(int i=1; i<=50; i++){
		int randomNumber = rand() % 101;
		array.push_back(randomNumber);
	}
	for(int i=0; i<=49; i++){
		cout << array[i] << " " << endl;
	}
	cout << "Alright, that's enough." << endl;
	cout << "You scored " << points << "/3 on the quiz!" << endl;
	return 0;
}
