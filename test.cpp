#include <iostream>
#include <map>
#include <vector>

int main() {
    std::vector<std::string> elements = {"kai", "kai", "mine", "mine"};

    std::map<std::string, int> counts;

    // 등장 횟수를 세어줍니다.
    for (const auto& element : elements) {
        counts[element]++;
    }

    // 결과 출력
    for (const auto& pair : counts) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    return 0;
}