#include <iostream>
using namespace std;

int factorial(int n){
	long long fact = 1;
	for(int i=1; i<=n; i++){
		fact *= i;
	}
	return fact;
}

void alignedPascal(int rows){
	for(int i=0; i<=rows-1; i++){
		int num = 1;
		for(int j=1; j<=i+1; j++){
			cout << num << " ";
			num = factorial(i)/(factorial(j)*factorial(i-j));
		}
		cout << endl;
	}
}

void normalPascal(int rows){
	for(int i=0; i<=rows-1; i++){
		int num = 1;
		for(int spaces=rows-i; spaces>0; spaces--){
			cout << " ";
		}
		for(int j=1; j<=i+1; j++){
			cout << num << " ";
			num = factorial(i)/(factorial(j)*factorial(i-j));
		}
		cout << endl;
	}
}



int main(){
	int rows, choice;
	cout << "Enter the number of rows you want: ";
	cin >> rows;
	cout << "Press 1 for an aligned triangle and 2 for a normal triangle: ";
	cin >> choice;
	if(choice==1){
		alignedPascal(rows);
	}
	else if(choice==2){
		normalPascal(rows);
	}
	else{
		cout << "Invalid Input!" << endl;
		exit(0);
	}
	return 0;
}
