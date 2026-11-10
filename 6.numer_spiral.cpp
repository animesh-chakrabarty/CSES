#include<bits/stdc++.h>
using namespace std;


long long getNxN(long long n){
	long long res = (n*n)-(n-1);
	return res;
}

long long getValue(int x, int y){
	long long res;
	long long n = max(x, y);
	long long NxN = getNxN(n);

	if(x == y)return NxN;

	if(n % 2 == 0 && (x-y) > 0){
		res = NxN + abs(x-y);
	}else if(n % 2 == 0 && (x-y) < 0){
		res = NxN - abs(x-y);
	}else if(n % 2 != 0 && (x-y) > 0){
		res = NxN - abs(x-y);
	}else if(n % 2 != 0 && (x-y) < 0){
		res = NxN + abs(x-y);
	}

	return res;
}

long long getValue_2(int x, int y){
	long long res;
	long long n = max(x, y);
	res = (n-1)*(n-1);

	if(n%2 == 0){
		res += x + n - y;
	}else{
		res += y + n - x;
	}

	return res;
}

int main(){
	int n, x, y;
	cin >> n;

	for(int i = 1; i <= n; i++){
		cin >> x >> y;
		cout << getValue_2(x, y) << endl;
	}
}