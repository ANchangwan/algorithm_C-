#include <bits/stdc++.h>
using namespace std;

string s1,s2;
int n;


int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> s1 >> s2;
    while(true){
        int n = s1.size();
        int  i = 0;
        bool flag = false;
        for(i = 0; i < n;i++){
            if(s1[i] == s2[0]){
                if(s1.substr(i, s2.size()) == s2) {  
                    s1.erase(i, s2.size());
                    i += s2.size();
                    flag = true;
                }
            }
        }
        if(!flag) break;
    }
    if(!s1.size()) cout << "FRULA" <<"\n";
    else cout << s1 << "\n";
    return 0;

}