#include<bits/stdc++.h>
using namespace std;

int solve(){
	int n;
	int k;
	cin>>k>>n;
	int count = 0;
	int val = 0;
	vector<int> arr(n);
	for(int i = 0;i < n;i++){
		cin>>arr[i];
		if(i == k){
			val = arr[k];
		}
		if(i >= k){
			if(arr[i] > val && arr[i] > 0){
				count++;
			}
		}
	}
	for(int i = 0;i < k;i++){
		if(arr[i] > val && arr[i] > 0){
			count++;
		}
	}
	return count;
}

int main(){

	cout<<solve();

	return 0;
}