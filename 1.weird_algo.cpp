#include<bits/stdc++.h>
using namespace std;

vector<long long> generateWeirdAlgo(int n){
	vector<long long> res;

	long long nlong = n * 1ll;

	while(nlong > 1){
		res.push_back(nlong);

		if(nlong%2 == 0)nlong = nlong/2;
		else nlong 	= (nlong*3) + 1;
	}

	res.push_back(1);

	return res;
}

int main(){
	int n;
	cin >> n;

	vector<long long> res = generateWeirdAlgo(n);

	for(auto it: res) cout << it << " ";
}