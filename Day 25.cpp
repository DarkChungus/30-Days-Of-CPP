#include <iostream>
using namespace std;
 
int main(){
	string n;
	char l = 'A';
	cin >> n;
	int c = 0, ans = 1;
	for(char d : n){
		if(d==l){
			c++;
			ans = max(c, ans);	
		}	
		else{
			l=d;
			c = 1;
		}
	}
	cout << ans;
	return 0;
}
