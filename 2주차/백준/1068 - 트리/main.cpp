#include <bits/stdc++.h>
using namespace std;

int n, m, k;
vector<int> v[51];
bool visited[51];

void dfs(int node) {
    visited[node] = true;
    for (int child : v[node]) {
        if (!visited[child]) {
            dfs(child);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    int root = -1;

    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m == -1) {
            root = i; // 루트 노드 설정
        } else {
            v[m].push_back(i); // 부모-자식 관계 설정
        }
    }

    cin >> k; // 삭제할 노드 입력

    // 삭제할 노드와 관련된 모든 연결 제거
    v[k].clear();
    for (int i = 0; i < n; i++) {
        v[i].erase(remove(v[i].begin(), v[i].end(), k), v[i].end());
    }

    if (root != k) { // 루트 노드가 삭제되지 않았을 경우에만 DFS 시작
        dfs(root);
    }

    // 리프 노드의 수 세기
    int leafCount = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i] && v[i].empty()) { // 방문한 노드 중 자식이 없는 노드
            leafCount++;
        }
    }

    cout << leafCount << "\n"; // 리프 노드의 개수 출력

    return 0;
}