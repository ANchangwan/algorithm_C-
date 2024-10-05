#include <bits/stdc++.h>
using namespace std;

int n;
long long cnt,ret=1;
string check = "111";

int main(){
    cin >> n;

    while(true){
        ret *= n;
        if(ret % n == 0) {
            cout << ret << "\n";
            break;
        }else{
            cnt =(cnt * 10) + 1;
            cnt %= n;
            ret++;
        }

    }
    cout << ret << "\n";
    return 0;
}