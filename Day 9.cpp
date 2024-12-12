#include <iostream>
using namespace std;

int main(){
	long long n, s = 0;

	std::cin >> n;

	for(int i=1; i<n; ++i){
		int a;
		std::cin >> a;
		s += a;
	}

	std::cout << n*(n+1)/2 - s << "\n";
}

// CSES Problem 2
