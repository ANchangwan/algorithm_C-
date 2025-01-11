#include<bits/stdc++.h>
using namespace std; 

string S, T,ret;

int main (){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> S >> T;
	for(char it : S){
		ret += it;
		if(ret.size() >= T.size() && ret.substr(ret.size() - T.size(), T.size()) == T){
			ret.erase(ret.end() - T.size(), ret.end());
		}
	}
	if(!ret.size()) cout << "FRULA" << "\n";
	else cout << ret << "\n";
	return 0;
}