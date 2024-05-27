#include <iostream>
#include <vector>

// prefixSum 함수 정의
vector<int> prefixSum(const vector<int>& input) {
    vector<int> result(input.size(), 0);
    if (input.empty()) return result;  // 빈 입력 처리

    // result[0] = input[0];  // 첫 번째 원소는 그대로

    // 나머지 원소들에 대해 이전 원소들의 합을 계산
    for (size_t i = 0; i < input.size(); i++) {
        result[i] = result[i - 1] + input[i];
    }

    return result;
}

int main() {
    std::vector<int> input = {1, 2, 3, 4, 5};

    // prefixSum 함수 호출
    std::vector<int> result = prefixSum(input);

    // 결과 출력
    std::cout << "Prefix Sum: ";
    for (const auto& val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}