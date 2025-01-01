
#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
int n,l,r,ret,from, to;
P L[100000004];


int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> n;
	for(int i =0; i < n; i++){
		cin >> from >> to;
		L[i] = P(from, to);
	}
	sort(L, L+n);
	l = L[0].first; r = L[0].second;
	for(int i  = 1; i < n; i++){
		if(r < L[i].first){
			ret += (r - l);
			r = L[i].second;
			l = L[i].first;
		}else if( L[i].first<=r && r <= L[i].second){
			r = L[i].second;
		}
	}
	ret += (r - l);
	cout << ret << "\n";
	return 0;
}
