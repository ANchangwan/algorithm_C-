#include <bits/stdc++.h>
using namespace std; 

string s;
int n, m,ret,cnt;
vector<int> v;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    while(n--){
        cin >> s;
        if (s != "all" && s != "empty") cin >> m;
        if(s == "add") ret |= (1 << m);
        else if(s == "remove") ret &= ~(1 << m);
        else if(s == "toggle") ret ^= (1 << m);
        else if(s == "empty") {ret = 0;}
        else if(s == "all"){
            ret = (1 << 21) - 1;
        }
        else if(s == "check"){
            if(ret & (1 << m)) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
       
    }
    return 0;
}
