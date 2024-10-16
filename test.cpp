#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a,b,c;

ll go(ll a, ll b){
    if(b == 1) return a % c;
    ll ret = go(a, b/2);
    ret = (ret * ret) % c;
    if(b % 2) ret = (ret * a) % c;
    return ret;
}

int n;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    while(scanf("%d",&n) != EOF){
        int cnt = 1; int ret = 1;
        while(true){
            if(cnt % n == 0){
                printf("%d", cnt);
                break;
            }else{
                ret = (ret * 10) + 1;
                ret %= n;
                cnt++;
            }
        }
    }
    

    return 0;

}