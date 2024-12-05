#include "CallCenter.h"

int main() {
    CallCenter center;

    // Load previous state
    center.loadQueue("queue.txt");
    center.loadStack("stack.txt");

    int choice;
    std::string callDetails;

    while (true) {
        std::cout << "\n1. Add Call\n2. View Next Call\n3. Handle Next Call\n4. View Pending Calls\n5. View Call History\n6. Save and Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); // Flush input buffer

        switch (choice) {
            case 1:
                std::cout << "Enter call details: ";
                std::getline(std::cin, callDetails);
                center.addCall(callDetails);
                break;
            case 2:
                std::cout << "Next Call: " << center.viewNextCall() << "\n";
                break;
            case 3:
                center.handleNextCall();
                break;
            case 4:
                center.viewPendingCalls();
                break;
            case 5:
                center.viewCallHistory();
                break;
            case 6:
                center.saveQueue("queue.txt");
                center.saveStack("stack.txt");
                std::cout << "State saved. Exiting...\n";
                return 0;
            default:
                std::cout << "Invalid choice!\n";
        }
    }
}