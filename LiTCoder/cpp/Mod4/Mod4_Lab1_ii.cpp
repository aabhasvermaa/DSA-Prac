#include <iostream>
#include <vector>

int performOperations(int n, const std::vector<std::vector<int>>& queries) {
    std::vector<int> arr(n + 1, 0);

    for (const auto& query : queries) {
        int start = query[0];
        int end = query[1];
        int value = query[2];

        arr[start - 1] += value;
        arr[end] -= value;
    }

    int maxValue = 0;
    int currentSum = 0;

    for (int i : arr) {
        currentSum += i;
        maxValue = std::max(maxValue, currentSum);
    }

    return maxValue;
}

int main() {
    int n, queryCount;
    std::cin >> n >> queryCount;

    std::vector<std::vector<int>> queries;
    for (int i = 0; i < queryCount; ++i) {
        std::vector<int> query(3);
        for (int j = 0; j < 3; ++j) {
            std::cin >> query[j];
        }
        queries.push_back(query);
    }

    int result = performOperations(n, queries);
    std::cout << result << std::endl;

    return 0;
}
