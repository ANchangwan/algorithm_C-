#include <bits/stdc++.h>
using namespace std;


string s,ret,temp;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    getline(cin, s);
    for(char i : s){
        if(isalpha(i)){
            if(islower(i)){
                ret += (i - 'a' + 13)%26 +'a';
            }else{
                ret += (i - 'A' + 13) % 26 + 'A';
            }
        }else ret += i;
    }

    cout << ret << "\n";
    
    return 0;
}