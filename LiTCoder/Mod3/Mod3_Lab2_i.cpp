#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> doSomething(const vector<string>& inval) {
    vector<int> arr;
    stringstream ss(inval[0]);
    int num;

    while (ss >> num) {
        arr.push_back(num);
    }

    int k = stoi(inval[1]);
    int n = stoi(inval[2]);

    vector<int> result;

    for (int i = 0; i <= arr.size() - k; ++i) {
        vector<int> subarray(arr.begin() + i, arr.begin() + i + k);
        sort(subarray.begin(), subarray.end());
        result.push_back(subarray[n - 1]);
    }

    return result;
}

int main() {
    // Read input from standard input
    string inputLine;
    vector<string> inputVal;
    while (getline(cin, inputLine)) {
        inputVal.push_back(inputLine);
    }

    // Perform the operation and print the result
    vector<int> outputVal = doSomething(inputVal);
    for (int i = 0; i < outputVal.size(); ++i) {
        cout << outputVal[i];
        if (i < outputVal.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}