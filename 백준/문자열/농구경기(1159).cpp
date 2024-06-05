#include <bits/stdc++.h>
using namespace std;

int N;
map<string, int> mp;
vector<char>str = {};
string st;
int arr[27] = {0};

int cnt = 0;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for(int i=0; i <N; i++){
        cin >> st;
        str.push_back(st[0]);
    }
    sort(str.begin(), str.end());
    for(int i=0; i<str.size();i++){
        arr[str[i] - 'a']++;
    }
    for(int i=0; i<26; i++){
        if(arr[i] >= 5){
            cout << 'a'+i <<"";
            cnt++;
        } 
    }
    if(cnt == 0) cout << "PREDAJA";

    return 0;

}