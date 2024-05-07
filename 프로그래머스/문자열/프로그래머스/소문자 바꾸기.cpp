#include <bits/stdc++.h>
using namespace std;

string solution(string myString) {
    string answer = myString;
    for(int i=0; i<answer.size(); i++){
        answer[i] = tolower(answer[i]);
    }
	
    return answer;
}

// tranform 사용
string solution(string myString) {
    string answer = "";
    transform(myString.begin(), myString.end(), myString.begin(),::tolower);
	
    return myString;
}