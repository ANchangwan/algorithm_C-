#include <bits/stdc++.h>
using namespace std;

int n,m,j,apple,cnt;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m >> j;
    int cnt = 0;
    int start = 1, _end = m;
    for(int i =0; i <j; i++){
        cin >> apple;
        bool flag = true;
        while(flag){
            if(apple <= start && apple <= _end){
                flag = false;
            }else if(apple < start){
                start--;
                _end--;
                cnt++;
            }else{
                start++;
                _end++;
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}