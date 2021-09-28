#include<bits/stdc++.h>
#include<string>
using namespace std;

void solve(){
	string s;
	cin>>s;
	

	int l = s.length();
	if(l > 10){
		ostringstream ss;
		ss << (l - 2);
		string temp = s[0] + ss.str() + s[s.length() - 1];
		cout<<temp<<"\n";
	}
	else{
		cout<<s<<"\n";
	}
}


int main(){
	int n;
	cin>>n;
	while(n--){
		solve();
	}
}