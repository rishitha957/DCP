#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	if(b==0){
		return a;
	}
	else{
		int a_prime = a%b;
		if(a_prime > b){
			return gcd(a_prime,b);
		}
		else{
			return gcd(b,a_prime);
		}
	}
}
int main(){
	int a,b;
	cin>>a>>b;
	if(a>b){
		cout<<gcd(a,b)<<endl;
	}
	else{
		cout<<gcd(b,a)<<endl;
	}
}