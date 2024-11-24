#include <bits/stdc++.h>
using namespace std;

const int INF = 987654321;
int n, mp, mf, ms, mv;
int ret = INF;

map<int, vector<vector<int>>> ret_v; // 비용별 조합 저장

struct A {
    int p, f, s, v, c;
} a[16];

void go(int idx, int p, int f, int s, int v, int sum, vector<int> temp_v) {
    // 모든 재료를 확인한 경우
    if (idx == n) {
        // 최소 조건 만족하는지 확인
        if (p >= mp && f >= mf && s >= ms && v >= mv) {
            if (ret > sum) {
                ret = sum; // 최소 비용 갱신
                ret_v[ret].clear(); // 이전 조합 제거
                ret_v[ret].push_back(temp_v); // 새로운 조합 저장
            } else if (ret == sum) {
                ret_v[ret].push_back(temp_v); // 같은 비용의 다른 조합 저장
            }
        }
        return;
    }

    // 현재 인덱스를 포함하지 않는 경우
    go(idx + 1, p, f, s, v, sum, temp_v);

    // 현재 인덱스를 포함하는 경우
    temp_v.push_back(idx + 1); // 1-based index 저장
    go(idx + 1, 
       p + a[idx].p, 
       f + a[idx].f, 
       s + a[idx].s, 
       v + a[idx].v, 
       sum + a[idx].c, 
       temp_v);
    temp_v.pop_back();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 입력 받기
    cin >> n >> mp >> mf >> ms >> mv;
    for (int i = 0; i < n; i++) {
        cin >> a[i].p >> a[i].f >> a[i].s >> a[i].v >> a[i].c;
    }

    // 탐색 시작
    go(0, 0, 0, 0, 0, 0, {});

    // 결과 처리
    if (ret == INF) {
        cout << -1 << '\n'; // 조건 만족하지 못하는 경우
    } else {
        sort(ret_v[ret].begin(), ret_v[ret].end()); // 사전순 정렬
        cout << ret << '\n'; // 최소 비용 출력
        for (int idx : ret_v[ret][0]) { // 첫 번째 조합 출력
            cout << idx << " "; // 1-based index 출력
        }
        cout << '\n';
    }
    return 0;
}