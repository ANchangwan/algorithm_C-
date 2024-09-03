#include <bits/stdc++.h>
using namespace std;

int N;
string st,ret;
int arr[26];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for(int i=0; i <N; i++){
        cin >> st;
        arr[st[0] - 'a']++;
    }
    
    for(int i=0; i<26; i++){
        if(arr[i] >= 5){
            ret += i + 'a';
     
        } 
    }
    if(ret.size()) cout << ret << "\n";
    else cout << "PREDAJA";

    return 0;

}