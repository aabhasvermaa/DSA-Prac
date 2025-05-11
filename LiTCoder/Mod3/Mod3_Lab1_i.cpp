#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int countSub(const std::string& a, const std::string& b) {
        int m = a.length();
        int n = b.length();
        std::vector<std::vector<int>> dp(m + 1, std::vector<int>(n + 1, 0));

        for (int i = 0; i <= n; ++i) {
            dp[0][i] = 0;
        }

        for (int i = 0; i <= m; ++i) {
            dp[i][0] = 1;
        }

        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (a[i - 1] == b[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return dp[m][n];
    }

    int maximumSubsequenceCount(const std::string& text, const std::string& pattern) {
        int n = text.length();
        int mxsub = countSub(text, pattern);
        int a = std::count(text.begin(), text.end(), pattern[0]);
        int b = std::count(text.begin(), text.end(), pattern[1]);
        return mxsub + std::max(a, b);
    }
};

int main() {
    std::string text, pattern;
    std::cin >> text >> pattern;

    Solution solution;
    int result = solution.maximumSubsequenceCount(text, pattern);

    std::cout << result << std::endl;

    return 0;
}
