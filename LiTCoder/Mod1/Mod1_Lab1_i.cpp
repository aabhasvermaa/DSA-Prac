#include <iostream>
#include <cctype> // for isupper, islower, isdigit
#include <iomanip> // for setprecision
using namespace std;

void analyzeEmail(const string& email) {
    int totalChars = email.length();
    int uppercaseCount = 0, lowercaseCount = 0, digitCount = 0, otherCount = 0;

    for (char ch : email) {
        if (isupper(ch)) {
            uppercaseCount++;
        } else if (islower(ch)) {
            lowercaseCount++;
        } else if (isdigit(ch)) {
            digitCount++;
        } else {
            otherCount++;
        }
    }

    // Calculate percentages
    float uppercasePercentage = (static_cast<float>(uppercaseCount) / totalChars) * 100;
    float lowercasePercentage = (static_cast<float>(lowercaseCount) / totalChars) * 100;
    float digitPercentage = (static_cast<float>(digitCount) / totalChars) * 100;
    float otherPercentage = (static_cast<float>(otherCount) / totalChars) * 100;

    // Output the results with 3 decimal places
    cout << fixed << setprecision(3);
    cout << uppercasePercentage << "%" << endl;
    cout << lowercasePercentage << "%" << endl;
    cout << digitPercentage << "%" << endl;
    cout << otherPercentage << "%" << endl;
}

int main() {
    string email;
    cin >> email;

    analyzeEmail(email);

    return 0;
}