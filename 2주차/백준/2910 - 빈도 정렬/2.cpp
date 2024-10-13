#include <bits/stdc++.h>
using namespace std;

int n,c,num,rk;
vector<int> ret;
map<int,int> mp;
map<int, int>mp2;

bool cmp(int a, int b){
    if(mp[a] != mp[b]){
        return mp[a] > mp[b];
    }
    return mp2[a] < mp2[b];
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> c;
    for(int i =0; i < n; i++){
        cin >> num;
        ret.push_back(num);

        mp[num]++;
        if(mp2[num] == 0) {
            rk++;
            mp2[num] = rk;
        }
    }
    sort(ret.begin(), ret.end(),cmp);
    for(int result : ret) cout << result << " ";

    return 0;
}