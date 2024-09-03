#include <bits/stdc++.h>
using namespace std;

int n;
int arr[26];
string a;
int cnt;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> a;
		arr[a[0] - 'a']++;
	}
	for(int i = 0; i < 26; i++){
		if(arr[i] >= 5){
			cout << char(i + 'a');
			cnt++;
		}
	}
	if(!cnt){
		cout << "PREDAJA";
	}

	return 0;
}