# dhueyITSE2359_Unit13
Call Center Simulation System
Problem Explanation
This project is a simulation of a call center system. It will handle any incoming calls in the order that they arrive, process the call, and keep a history of any completed calls. The system ensures the following:
1. New calls are added to a queue, so they are handled on a first-come, first serve basis.
2. Once a call is processed, it will be stored in a stack so we can review completed calls in reverse order.
3. All data (queue and stack) is saved to files when the program exits and loaded back when it starts, so no data is lost.

How It Works
Queue Usage:
Incoming calls are added to a queue because it operates on the First-In-First-Out (FIFO) principle. This ensures calls are processed in the order they arrive.

Stack Usage:
Once a call is handled, it gets removed from the queue and pushed onto a stack. The stack works on the Last-In-First-Out (LIFO) principle, allowing us to review the most recent calls first.

File Persistence:
The queue and stack are saved to separate text files (queue.txt and stack.txt) whenever the program exits. When the program starts again, it loads these files so the previous session’s data is restored.

How to Run the Program
Compile the Program: Use a C++ compiler to build the program. With g++, you can compile it like this:

bash

g++ main.cpp CallCenter.cpp -o callcenter
Run the Program: After compiling, run the program:

bash

./callcenter
Use the Menu: The program will show a menu with these options:

sql

1. Add Call
2. View Next Call
3. Handle Next Call
4. View Pending Calls
5. View Call History
6. Save and Exit
Choose 1 to add a new call to the queue.
Choose 2 to see the first call in the queue without removing it.
Choose 3 to handle the next call (moves it from queue to stack).
Choose 4 to see all pending calls.
Choose 5 to see completed call history.
Choose 6 to save your progress and exit the program.
Persistent Data:

When you exit the program, the queue and stack data are saved to queue.txt and stack.txt.
When you run the program again, it automatically restores the data.