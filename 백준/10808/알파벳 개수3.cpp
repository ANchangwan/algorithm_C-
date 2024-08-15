#include <bits/stdc++.h>
using namespace std;

int a[256];
string s;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	cin >> s;
	for(auto i : s){
		a[static_cast<unsigned char>(i)]++;
	}
	for(char i = 'a'; i<='z'; i++){
		cout << a[static_cast<unsigned char>(i)] << " ";
	}

	
	return 0;
}