#include<bits/stdc++.h>
using namespace std;

int maxEven(int n){
	if(n % 2 == 0) return n;
	else return n-1;
}

void printPermutation(int n){
	if(n == 1){
		cout << n;
		return;
	}

	if(abs(maxEven(n) - 1) <= 1){
		cout << "NO SOLUTION";
		return;
	}

	for(int i = 1; i <= n; i++){
		if(i%2 == 0)cout << i << " ";
	}

	for(int i = 1; i <= n; i++){
		if(i%2 != 0)cout << i << " ";
	}

	return;
}

int main(){
	int n;
	cin >> n;

	printPermutation(n);
}