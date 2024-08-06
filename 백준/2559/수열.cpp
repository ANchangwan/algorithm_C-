// 구간이 나온다? 구간합 preFixSum
// 최대? 최솟값을 먼저 구한다. max(최소변수, 최대값)
// 최소? 최댓값을 구한다. min(최댓값, 최소값)

#include<bits/stdc++.h> 
using namespace std;  

int n, k, temp, psum[100001], ret = -1000000; 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	cin >> n >> k; 
	for(int i = 1; i <= n; i++){
		cin >> temp; psum[i] = psum[i - 1] + temp; 
	} 
	for(int i = k; i <= n; i++){
		ret = max(ret, psum[i] - psum[i - k]);
	}
	cout << ret << "\n";
    return 0;
}