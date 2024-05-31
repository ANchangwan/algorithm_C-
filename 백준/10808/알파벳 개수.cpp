#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string alpa;
    map<char, int> ap;
    cin >> alpa;

    for(int i=0; i<26; i++){
        ap.insert({char(97+i),0});
    }
    for(auto res : alpa){
        ap[res] += 1;
    }
    for(int i=0; i < 26; i++){
        cout << ap[char(97+i)] << " ";
    }

    return 0;

}