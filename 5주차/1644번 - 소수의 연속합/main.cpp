#include <bits/stdc++.h>
using namespace std;  
bool che[4000001];
int n, a[2000001], p, lo, hi, ret, sum; 


int main(){
	int n,ret,x, e;
	vector<int> v;
	cin >> n;
	for(int i =0; i < n; i++){
		cin >> e;
		v.push_back(e);
	} 
	cin >> x;
	int r = n-1, l = 0;
	while(l < r){
		if(v[l] + v[r] > x) r--; 
	}
}