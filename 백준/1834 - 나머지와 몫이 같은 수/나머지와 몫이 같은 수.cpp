#include<bits/stdc++.h>
using namespace std; 
long long n,res;
int main(){
    stack<int> stk;
	ios_base::sync_with_stdio(0); cin.tie(NULL);
    cin >> n;
    for(int i = 0; i< n; i++){
        res += (n+1)*i; 
    }
    cout << res << "\n";
    return 0;
}