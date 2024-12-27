#include <bits/stdc++.h>
using namespace std;

int_fast16_t n,k,c,m,v,ret;
vector<int> vv;

bool cmp(int a, int b) {
	return a > b;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> n >> k;
	vector<pair<int, int>> v(n); // 보석
	vector<int> vv;
	 // 가방 무게

	for(int i =0; i < n; i++){
		cin >> v[i].first >> v[i].second;
	}
	for(int i =0; i< k; i++){
		cin >> vv[i];
	}
	sort(v.begin(), v.end());
	sort(vv.begin(), vv.end());
	priority_queue<int> pq;

	

	int j = 0;
	for(int i = 0; i < k; i++){
		while(j < n && v[j].first <= vv[i]) pq.push(v[j++].second);
		if(pq.size()){
			ret += pq.top(); pq.pop();
		}
	}
	cout << ret << "\n";
	return 0;
}