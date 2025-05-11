//Mod 1 Lab2 C++
//two stacks

#include <iostream>
#include <stack>
#include <sstream>

class CustomQueue {
private:
    std::stack<int> enqueueStack;
    std::stack<int> dequeueStack;

public:
    void enqueue(int element) {
        enqueueStack.push(element);
    }

    void dequeue() {
        if (dequeueStack.empty()) {
            while (!enqueueStack.empty()) {
                dequeueStack.push(enqueueStack.top());
                enqueueStack.pop();
            }
        }
        if (!dequeueStack.empty()) {
            dequeueStack.pop();
        }
    }

    void printFront() {
        if (dequeueStack.empty()) {
            while (!enqueueStack.empty()) {
                dequeueStack.push(enqueueStack.top());
                enqueueStack.pop();
            }
        }
        if (!dequeueStack.empty()) {
            std::cout << dequeueStack.top() << std::endl;
        }
    }
};

int main() {
    CustomQueue customQueue;
    std::string inputLine;
    std::getline(std::cin, inputLine);

    std::istringstream iss(inputLine);
    std::string token;
    while (std::getline(iss, token, ',')) {
        std::istringstream tokenStream(token);
        std::string queryType;
        tokenStream >> queryType;
        if (queryType == "1") {
            int element;
            tokenStream >> element;
            customQueue.enqueue(element);
        } else if (queryType == "2") {
            customQueue.dequeue();
        } else if (queryType == "3") {
            customQueue.printFront();
        }
    }

    return 0;
}