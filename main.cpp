#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int INF = 987654321;
map<int, vector<vector<int>>> ret_v;
int n,mp,mf,ms,mv;
int d,e,f,v,sum,ret = INF;
struct A{
    int mp,mf,ms,mv,cost;
}a[16];

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    cin >> mp >> mf >> ms >> mv;
    for(int i=0; i <n; i++){
        cin >> a[i].mp >> a[i].mf >> a[i].ms >> a[i].mv >> a[i].cost;
    }
    for(int i=0; i < (1 << n); i++){
        vector<int> temp;
        d = e = f = v = sum = 0;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)){
                d += a[j].mp;
                e += a[j].mf;
                f += a[j].ms;
                v += a[j].mv;
                sum += a[j].cost;
                temp.push_back(j+1);
            }
        }
        if(d >= mp && e >= mf && f >= ms && v >= mv){
            if(ret >= sum){
                ret = sum;
                ret_v[ret].push_back(temp);
            }
        }
    }
    if(ret == INF){
        cout << -1 << "\n";

    }else{
        sort(ret_v[ret].begin(), ret_v[ret].end());
        cout << ret << "\n";
        for(auto a : ret_v[ret][0]){
            cout << a << " ";
        }
    }
    return 0;

}