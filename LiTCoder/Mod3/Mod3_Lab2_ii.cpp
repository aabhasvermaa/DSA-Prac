#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

string isGoodPassword(const vector<string>& passwords) {
    for (int i = 0; i < passwords.size(); ++i) {
        for (int j = i + 1; j < passwords.size(); ++j) {
            if (passwords[i] == passwords[j] ||
                passwords[i].find(passwords[j]) == 0 ||
                passwords[j].find(passwords[i]) == 0) {
                return "BAD PASSWORD";
            }
        }
    }
    return "GOOD PASSWORD";
}

int main() {
    string inputLine;
    vector<string> inputVal;

    // Read input from standard input
    getline(cin, inputLine);
    istringstream ss(inputLine);  // Fix: Use istringstream
    string password;

    while (ss >> password) {
        inputVal.push_back(password);
    }

    // Perform the operation and print the result
    string outputVal = isGoodPassword(inputVal);
    cout << outputVal << endl;

    return 0;
}