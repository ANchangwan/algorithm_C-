#include<bits/stdc++.h>
using namespace std; 

// 모음(a,e,i,o,u) 하나를 반드시 포함
// 모음이 3개 혹은 자음이 3개 연속으로 오면 안 된다.
// 같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용한다

// 숫자 , 알파벳 n줄
// 가능한 가장 큰숫자
// 숫자 문자 앞뒤, 시작 또는 끝
int n;
string s;
vector<int> a;

bool cmp(int a, int b){
	if(a == b) return a < b;
	return a < b;
}

int main(){
    cin >> n;
    string num = "";

    for(int i=0; i < n; i++){
        cin >> s;
        for(int i=0; i <= s.size(); i++){
            if(isdigit(s[i])){
                num+=s[i];
            }else{
                if(!num.empty()){
                    a.push_back(atoi(num.c_str()));
                    num = "";
                }
            }
        }
    }
    sort(a.begin(), a.end(),cmp);
    for(int i : a){
        cout << i << "\n";
    }

    return 0;
}