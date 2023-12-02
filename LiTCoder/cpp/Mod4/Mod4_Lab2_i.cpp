#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <numeric>
using namespace std;
vector<string> trimNumbers(const vector<string>& nums, int trim_i) {
    vector<string> trimmedNums;
    for (const string& num : nums) {
        string trimmed = num.substr(num.length() - trim_i);
        trimmedNums.push_back(trimmed);
    }
    return trimmedNums;
}
int main() {
    vector<string> nums;
    int num_queries;
    string input;
    getline(cin, input);
    istringstream iss(input);
    string num;
    while (iss >> num) {
        nums.push_back(num);
    }
    cin >> num_queries;
    for (int i = 0; i < num_queries; ++i) {
        int k, trim_i;
        cin >> k >> trim_i;
        vector<string> trimmedNums = trimNumbers(nums, trim_i);
        vector<int> indices(trimmedNums.size());
        iota(indices.begin(), indices.end(), 0);
        sort(indices.begin(), indices.end(), [&](int a, int b) {
            return trimmedNums[a] < trimmedNums[b] || (trimmedNums[a] == trimmedNums[b] && a < b);
        });
        cout << indices[k - 1] << " ";
    }
    return 0;
}