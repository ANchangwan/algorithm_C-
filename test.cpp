#include <bits/stdc++.h>
using namespace std;

string s;
map<char, int> mp;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	cin >> s;
	for(int i=0; i<26; i++){
        mp.insert({char(97+i),0});
    }
	for(auto i : s){
		mp[i]++;
	}
	for(int i=0; i < 26; i++){
        cout << mp[char(97+i)] << " ";
    }
	return 0;
}