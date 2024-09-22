#include<bits/stdc++.h>
using namespace std; 

int n,c,a[1004];
vector<pair<int, int>> arr;
map<int, int> mp,mp_rank;


bool cmp(pair<int,int> a, pair<int, int> b){
	if(a.second == b.second){
		return mp_rank[a.first] < mp_rank[b.first];
	}
	return a.second > b.second;
}


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> c;
    for(int i=0; i < n; i++){
        cin >> a[i];mp[a[i]]++;
        if(mp_rank[a[i]] == 0) mp_rank[a[i]] = i + 1;
    }
    for(auto it : mp){
        arr.push_back({it.first, it.second});
    }
    sort(arr.begin(), arr.end(),cmp);
    for(auto it : arr){
        for(int i=0; i < it.second; i++){
            cout << it.first << " ";
        }
    }
    return 0;
}