#include<bits/stdc++.h>
using namespace std; 
// m < n
// 왼족 오른쪽 이동가능 하지만 스크린의 경계를 넘어가면 안된다.
//최솟값

int n, m, j, apple,l, r,ret;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m >> j;
    l = 1;
    for(int i=0;i < j; i++){
        r = l+m-1;
        cin >> apple;
        if(apple >= l && apple <= r) continue;
        if(apple < l){
            ret+= (l - apple);
            l = apple;
        }else{
            l += (apple - r);
            ret += (apple - r);
        }
    }
    cout << ret << "\n";
    return 0;
}