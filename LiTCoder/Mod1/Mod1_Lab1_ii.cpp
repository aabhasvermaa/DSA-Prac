#include <iostream>
#include <unordered_map>
#include <vector>

int findMaxLength(const std::vector<int>& nums) {
    std::unordered_map<int, int> countMap;
    int maxLength = 0;
    int count = 0;

    for (int i = 0; i < nums.size(); ++i) {
        count += (nums[i] == 0) ? -1 : 1;

        if (count == 0) {
            maxLength = i + 1;
        } else if (countMap.find(count) != countMap.end()) {
            maxLength = std::max(maxLength, i - countMap[count]);
        } else {
            countMap[count] = i;
        }
    }

    return maxLength;
}

int main() {
    std::vector<int> nums;
    int num;

    // Read integers from standard input until there is no more input
    while (std::cin >> num) {
        nums.push_back(num);
    }

    // Find and output the maximum length of a contiguous subarray
    int result = findMaxLength(nums);
    std::cout << result;

    return 0;
}