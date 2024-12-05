#ifndef CALLCENTER_H
#define CALLCENTER_H

#include <queue>
#include <stack>
#include <string>
#include <fstream>
#include <iostream>

class CallCenter {
private:
    std::queue<std::string> callQueue;
    std::stack<std::string> callHistory;

public:
    // Load states from files
    void loadQueue(const std::string& filename);
    void loadStack(const std::string& filename);

    // Save states to files
    void saveQueue(const std::string& filename);
    void saveStack(const std::string& filename);

    // Menu actions
    void addCall(const std::string& call);
    std::string viewNextCall();
    void handleNextCall();
    void viewPendingCalls();
    void viewCallHistory();
};

#endif