#include<bits/stdc++.h>
using namespace std;

int printMissingNumber_1(vector<int> &arr){
	int n = arr.size();

	int missing = n;
	for (int i = 1; i < n; ++i)
	{
		missing ^= i;
		missing ^= arr[i-1];
	}

	return missing;
}

int printMissingNumber_2(vector<int> &arr){
	long long n = arr.size() * 1ll;

	long long expectedSum = (n*(n + 1)) / 2;
	long long actualSum = 0;

	for (int i = 0; i < n-1; ++i) actualSum += arr[i];

	return expectedSum - actualSum;
}

int main(){
	int n;
	cin >> n;

	vector<int> arr;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		arr.push_back(x);
	}

	// cout << printMissingNumber_1(arr);
	cout << printMissingNumber_2(arr);

}