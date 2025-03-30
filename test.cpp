#include <bits/stdc++.h>
using namespace std; 

vector<string> splite(const string& input, string delimiter){
    vector<string> result;
    auto start = 0;
    auto end = input.find(delimiter);
    while(end != string::npos){
        result.push_back(input.substr(start, end - start));
        start = end + delimiter.size();
        end = input.find(delimiter, start);
    }
    result.push_back(input.substr(start));
    return result;
}

int main(){
    string a = "hello world";
    reverse(a.begin(), a.end());
    cout << a << "\n";

    return 0;
}