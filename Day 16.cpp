#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector<int> primeNumbers;
	int c = 0;
	unsigned long long limit = 6000;

	for(int i=1; i<=limit; i++){
		c = 0;
		for(int j=1; j<=i; j++){
			if(i%j==0){
				c++;
			}
		}
		if(c==2){
			primeNumbers.push_back(i);	
		}
	}
	
	for(int i=0;i<primeNumbers.size();i++){
		cout << primeNumbers[i] << "\n";
	}

	return 0;
}

// Messed around with vectors.
// Here is a prime number finding program.
