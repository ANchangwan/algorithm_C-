#include <bits/stdc++.h>
using namespace std;


vector<string> solution(vector<string> players, vector<string> callings) {
 	map<string, int> m;
		for (int i = 0; i < players.size(); i++)
			m.insert({ players[i], i });

	for (int i = 0; i < callings.size(); i++)
	{
		string calling = callings[i];
		int rank = m[calling];

		string temp = players[rank - 1];
		players[rank - 1] = players[rank];
		players[rank] = temp;

		m[calling] = rank - 1;
		m[temp] = rank;

	}

	return players;
}

// 배열 안에 순서 바꾸기

// map을 이용해서 문자열:순서 이런식으로 맵핑해서 문자의 순서를 할당한다.
// 정렬 알고리즘에서 사용하는 swap을 이용해서 교환한다.
// 다시 맵핑된 값을 순서를 다시 저장한다.

// 정렬 알고리즘, 맵핑
//1. c++에서 맵핑하는 방법을 모름
//2. 정렬 알고리즘에서 사용하는 swap 코딩이 생각이 나지 않았음