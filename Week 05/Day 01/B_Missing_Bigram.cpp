#include<bits/stdc++.h>
using namespace std;
 
string s[105];
 
int main(){
	int t;
	int n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n - 2; i++){
			cin >> s[i];
		}
		string ss = "";
		ss += s[0];
		bool flag = 0;
		for(int i = 1; i < n - 2; i++){
			if(s[i][0] != s[i - 1][1]){
				ss += s[i][0];
				flag = 1;
			}
			ss += s[i][1];
		}
		if(flag == 0){
			ss += "a";
		}
		cout << ss << endl;
	}
	return 0;
}
