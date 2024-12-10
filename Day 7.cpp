#include <iostream>
#include <cmath>
using namespace std;

int main(){
	unsigned long long a = 0, b = 0;

	for(int i=1; i<=100; ++i){
		a += pow(i,2);
		b += i;
	}

	b *= b;

	std::cout << (b-a) << "\n";

	return 0;
}

// Haha, got caught lacking again, I guess. It's been a week since I've been learning C++, and I'm pretty proud of my progress, considering I only give ~30 minutes per day.
// Heres problem 6 of project euler.
// Tomorrow will probably be a 4x4 determinant calculator, as we have a practical class tomorrow in school. Until then, cya!!!
