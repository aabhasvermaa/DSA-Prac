#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string current = "";
    vector<vector<string>> history;

    // Assuming the second line contains the operations
    string inputLine;
    getline(cin, inputLine);
    stringstream ss(inputLine);
    string operation;

    while (getline(ss, operation, ',')) {
        vector<string> args;
        stringstream opStream(operation);
        string arg;
        while (opStream >> arg) {
            args.push_back(arg);
        }

        if (args[0] == "1") {
            current += args[1];
            history.push_back({args[0], to_string(args[1].length())});
        } else if (args[0] == "2") {
            int deleteCount = stoi(args[1]);
            string deleted = current.substr(current.length() - deleteCount);
            current = current.substr(0, current.length() - deleteCount);
            history.push_back({args[0], deleted});
        } else if (args[0] == "3") {
            int index = stoi(args[1]);
            cout << current[index - 1] << endl;
        } else if (args[0] == "4") {
            vector<string> undo = history.back();
            history.pop_back();
            if (undo[0] == "1") {
                int deleteCount = stoi(undo[1]);
                current = current.substr(0, current.length() - deleteCount);
            } else if (undo[0] == "2") {
                current += undo[1];
            }
        }
    }

    return 0;
}