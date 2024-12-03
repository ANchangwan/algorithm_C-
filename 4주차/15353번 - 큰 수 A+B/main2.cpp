#include <bits/stdc++.h>
using namespace std;

string a,b,ret;
int res[10001];

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int lenA = a.size();
    int lenB = b.size();
    int len = max(lenA, lenB);
   
    for (int i = 0; i < len; i++) {
        if (i < lenA) res[i] += a[i] - '0';
        if (i < lenB) res[i] += b[i] - '0';

        if (res[i] >= 10) {  
            res[i] -= 10;
            res[i + 1]++;
        }
    }
    if(res[len] > 0) len++; // 마지막 자리 올림 확인
    
    reverse(res, res + len);
        
    for(int i = 0; i < len; i++){
        ret += (char)(res[i]+'0');
    }
    if(ret.empty()) cout << 0 << "\n";
    cout << ret << "\n";
   
    return 0;
}