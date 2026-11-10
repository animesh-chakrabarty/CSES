#include<bits/stdc++.h>
using namespace std;

long long getMinMovesForIncreasingArray(int n, int arr[]){
	long long max_moves = 0ll;

	for (int i = 1; i < n; ++i)
	{
		if(arr[i] < arr[i-1]) {
			long long diff = arr[i-1] - arr[i];
			max_moves += diff;

			arr[i] = arr[i] + diff;
		}	
	}

	return max_moves;
}

int main(){
	int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; ++i) cin >> arr[i];

	cout << getMinMovesForIncreasingArray(n, arr);
}