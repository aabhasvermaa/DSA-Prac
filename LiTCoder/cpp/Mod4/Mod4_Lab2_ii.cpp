#include <iostream>
#include <vector>
using namespace std;
vector<int> getEgyptianFraction(int numerator, int denominator) {
    vector<int> result;
    while (numerator != 0) {
        int unit_denominator = (denominator + numerator - 1) / numerator;  // ceil division
        result.push_back(unit_denominator);
        numerator = numerator * unit_denominator - denominator;
        denominator *= unit_denominator;
    }
    return result;
}
int main() {
    int numerator, denominator;
    cin >> numerator >> denominator;
    vector<int> egyptianFraction = getEgyptianFraction(numerator, denominator);
    for (int unit_denominator : egyptianFraction) {
        cout << unit_denominator << endl;
    }
    return 0;
}