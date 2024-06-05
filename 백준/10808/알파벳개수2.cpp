#include <bits/stdc++.h>
using namespace std;

int a[26];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string alpa;
    cin >> alpa;
    for(char ap : alpa){
        a[ap - 'a']++;
    }
    for(int i=0; i<26; i++) cout << a[i] << " ";

    return 0;

}