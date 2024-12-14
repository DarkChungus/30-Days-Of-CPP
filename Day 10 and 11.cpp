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

// This one is Day 10 and 11. This is also CSES problem 3.
// I haven't been able to do a lot of coding recently, since I now have tuition(which totally sucks), and the teacher is making me study a lot(a LOT) for my SEE exams.
// I really don't like it.
// Anyways, see you next problem!
