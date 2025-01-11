#include <bits/stdc++.h>
using namespace std;

#define ll long long

int factorial(ll n) {
    ll ans;
    for(int i=1; i<=n; i++){
        ans *= i;
    }
    return ans;
}

void odd_or_even(ll n) {
    if(n%2==0) {
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
}

void area(ll r) {
    float pi = 3.14;
    ans = pi * (r*r);
    cout << ans << " is the area of the circle.";
}

int main(){
    int choice;
    cout << "Press" << endl;
    cout << "1 for Factorial" << endl;
    cout << "2 for Odd or Even" << endl;
    cout << "3 for Area of Circle" << endl;
    cout << "4 for Exit" << endl;
    cin >> choice >> endl;
    if(choice==1){
        int n;
        cout << "FACTORIAL OF NUMBER" << endl;
        cout << "Enter a number";
        cin >> n;
        cout << "The factorial is " << factorial(n) << endl;
        return 0;
    }
    else if(choice==2){
        int n;
        cout << "ODD OR EVEN" << endl;
        cout << "Enter a number";
        cin >> n;
        odd_or_even(n);
        return 0;
    }
    else if(choice==3){
        int n;
        cout << "AREA OF A CIRCLE" << endl;
        cout << "Enter a number for radius";
        cin >> n;
        area(n);
        return 0;    
    }
    else if(choice==4){
        exit;
    }
    else{
        cout << "learn how to fucking type randi";
    }

    return 0;
}

// A program a friend from college gave to me. It was fun to do.
