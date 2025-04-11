#include<bits/stdc++.h>
using namespace std;
int cnt[28];
string str,ret;


void Ios_Base(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    return;
}

int main(){
    Ios_Base();
    getline(cin, str);
    for(auto it : str){
        if('A' <= it && it <= 'Z')ret+= (char)((it + 13 -'A') % 26 + 'A');
        else if('a' <= it && it <= 'z') ret += (char)((it + 13 -'a') % 26 + 'a');
        else ret+= it;
    }
    cout << ret << "\n";
    
    return 0;

}