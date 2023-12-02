#include <iostream>

class Solution {
public:
    int minimumNumbers(int num, int k) {
        if (num == 0) {
            return 0;
        }
        for (int i = 1; i <= 10; ++i) {
            if (i * k > num + 1) {
                break;
            }
            if ((i * k) % 10 == num % 10) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    int num, k;
    // Take user input in one line without displaying any prompt
    std::cin >> num >> k;

    // Check if there is only one input
    if (std::cin.fail()) {
        std::cout << -1 << std::endl;
    } else {
        // Proceed with the calculation
        Solution solution;
        int result = solution.minimumNumbers(num, k);

        // Print the result
        std::cout << result << std::endl;
    }

    return 0;
}