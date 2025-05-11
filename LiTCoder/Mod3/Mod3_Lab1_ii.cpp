#include <iostream>
#include <vector>
#include <algorithm>

int minStepsToTargetSweetness(int target, std::vector<int>& candies) {
    std::sort(candies.begin(), candies.end());
    int steps = 0;

    while (candies[0] < target) {
        int combinedSweetness = candies[0] + 2 * candies[1];
        candies.erase(candies.begin());
        candies.erase(candies.begin());
        candies.insert(std::lower_bound(candies.begin(), candies.end(), combinedSweetness), combinedSweetness);
        steps++;
    }

    return steps;
}

int main() {
    int targetSweetness;
    std::cin >> targetSweetness;

    std::vector<int> candies;
    int candy;
    while (std::cin >> candy) {
        candies.push_back(candy);
    }

    int result = minStepsToTargetSweetness(targetSweetness, candies);
    std::cout << result << std::endl;

    return 0;
}
