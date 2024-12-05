#include "CallCenter.h"

// Load queue state from file
void CallCenter::loadQueue(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        callQueue.push(line);
    }
    file.close();
}

// Load stack state from file
void CallCenter::loadStack(const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    while (std::getline(file, line)) {
        callHistory.push(line);
    }
    file.close();
}

// Save queue state to file
void CallCenter::saveQueue(const std::string& filename) {
    std::ofstream file(filename);
    std::queue<std::string> tempQueue = callQueue;
    while (!tempQueue.empty()) {
        file << tempQueue.front() << "\n";
        tempQueue.pop();
    }
    file.close();
}

// Save stack state to file
void CallCenter::saveStack(const std::string& filename) {
    std::ofstream file(filename);
    std::stack<std::string> tempStack = callHistory;
    while (!tempStack.empty()) {
        file << tempStack.top() << "\n";
        tempStack.pop();
    }
    file.close();
}

// Add a new call to the queue
void CallCenter::addCall(const std::string& call) {
    callQueue.push(call);
    std::cout << "Call added: " << call << "\n";
}

// View the next call in the queue
std::string CallCenter::viewNextCall() {
    if (callQueue.empty()) return "No calls in the queue!";
    return callQueue.front();
}

// Handle the next call
void CallCenter::handleNextCall() {
    if (callQueue.empty()) {
        std::cout << "No calls to handle!\n";
        return;
    }
    std::string call = callQueue.front();
    callQueue.pop();
    callHistory.push(call);
    std::cout << "Handled call: " << call << "\n";
}

// View all pending calls
void CallCenter::viewPendingCalls() {
    std::queue<std::string> tempQueue = callQueue;
    std::cout << "Pending Calls:\n";
    while (!tempQueue.empty()) {
        std::cout << tempQueue.front() << "\n";
        tempQueue.pop();
    }
}

// View call history
void CallCenter::viewCallHistory() {
    std::stack<std::string> tempStack = callHistory;
    std::cout << "Call History:\n";
    while (!tempStack.empty()) {
        std::cout << tempStack.top() << "\n";
        tempStack.pop();
    }
}