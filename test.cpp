#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, x, ret;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    scanf("%lld", &n);
    vector<ll> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i]; 
    }
    scanf("%lld", &x);
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;
    while(l < r){
        if(v[l] + v[r] == x) {
            r--;
            ret++;
        }else if(v[l]+v[r] > x) r--;
        else l++;
    } 
    cout << ret << "\n";
    return 0;
}