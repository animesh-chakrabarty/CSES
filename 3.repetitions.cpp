#include<bits/stdc++.h>
using namespace std;

int getMaxRep(string seq){
	int max_rep = 1;
	int curr_rep = 1;

	for(int i = 1; i < seq.size(); i++){
		
		// MAIN BRANCH: on start of new seq, store curr_rep if max & reset current counter
		if(seq[i] != seq[i-1]){
			max_rep = max(max_rep, curr_rep);
			curr_rep = 1;
			continue;
		}

		curr_rep++;
	}

	// EDGE CASE: if last seq is the longest seq in that case max_rep is never updated as per last seq length
	return max(max_rep, curr_rep);
}

int main(){
	string seq;
	cin >> seq;

	cout << getMaxRep(seq);	
}