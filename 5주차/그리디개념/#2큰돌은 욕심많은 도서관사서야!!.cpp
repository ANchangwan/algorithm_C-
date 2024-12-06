#include<bits/stdc++.h>
using namespace std;

int ret,from,to,n;
vector<pair<int,int>> v;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> from >> to;
        v.push_back({to, from});
    }
    sort(v.begin(), v.end());
    int start = v[0].second;
    int end = v[0].first;
    for(int i = 0; i<n;i++){
        if(v[i].first < end) continue;
        end = v[i].first;
        from = v[i].second;
        ret++;
    }
    cout << ret << "\n";
    return 0;
}