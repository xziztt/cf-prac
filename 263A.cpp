#include<bits/stdc++.h>
using namespace std;
void solve(){
	int col,row;
	vector<vector<int>> matrix(5,vector<int>(5));
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 5;j++){
			cin>>matrix[i][j];
			if(matrix[i][j] == 1){
				row = i;
				col = j;
			}
		}
	}
	row = abs(row - 2);
	col = abs(col - 2);
	cout<<row + col;
}


int main(){

	solve();

	return 0;
}