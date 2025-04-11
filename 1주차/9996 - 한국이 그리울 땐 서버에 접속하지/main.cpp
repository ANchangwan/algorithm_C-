#include<bits/stdc++.h>
using namespace std;
int n;
string s,str,st,e;
int star;
queue<string> v;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> s;

    star = s.find("*");
    st = s.substr(0, star);
    e = s.substr(star + 1);

    for(int i =0; i < n;i++){
        cin >> str;
        if(st.length() + e.length() <= str.length()){
            if(str.substr(0, st.length()) == st && str.substr(str.length() - e.length()) == e) v.push("DA");
            else v.push("NE"); 
        }else v.push("NE");
    }
    while(v.size()){
        cout << v.front() << "\n";
        v.pop();
    }
    
    return 0;

} 