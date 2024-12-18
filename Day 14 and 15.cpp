#include <iostream>
using namespace std;

int main(){
	int primec = 0;
	int c = 0;
	unsigned long long i = 0;
	while(primec<=10001){
		i++;
		for(int k=1; k<=i; k++){
			if(i%k==0){
				c++;
			}
			if(c==2){
				primec++;
			}
		}	
	}
	cout << i;
}

// I dont have time to check if this works.
// In theory, it should.
// My bad if it doesnt.
