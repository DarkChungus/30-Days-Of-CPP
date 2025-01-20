#include <bits/stdc++.h>
using namespace std;
 
int main(){
	long long num, sum = 0;
	cin >> num;
	for(int i=1; i<=(num-1); i++){
		long long temp;
		cin >> temp;
		sum+=temp;
	}
	long long ans;
	ans = num*(num+1)/2 - sum;
	cout << ans << endl;
}

// Apparently it's the second best way to solve this. Am proud of it
