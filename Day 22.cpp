#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	vector<int> numbers;
	unsigned int limit;
	cout << "Enter the limit for the array size: ";
	cin >> limit;
	cout << endl;
	for(unsigned int i=1; i<=limit; i++){
		int randomNumber = rand() % (limit+1);
		numbers.push_back(randomNumber);
	}
	cout << "Unsorted list is: ";
	for(unsigned int i=0; i<=numbers.size()-1; i++){
		cout << numbers[i] << " ";
	}
	cout << endl;
	cout << "Sorted list is: ";
	sort(numbers.begin(), numbers.end());
	for(unsigned int i=0; i<=numbers.size()-1; i++){
		cout << numbers[i] << " ";
	}
	return 0;
}
