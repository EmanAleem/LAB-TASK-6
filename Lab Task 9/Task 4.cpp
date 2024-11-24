#include <iostream>
#include <string>
using namespace std;
int main() {
    const int entryFee = 300;  
    const int snackCost = 150; 
    const int maxStudents = 15; 
    int numStudents;
    string studentNames[maxStudents]; 
    int totalCost = 0;
    cout << "Welcome to the Game Night Event!" << endl;
    cout << "How many students will attend the game night? (Maximum 15): ";
    cin >> numStudents;
    if (numStudents > maxStudents) {
        cout << "Error: Not more than " << maxStudents << " students allowed." << endl;
    } else {
        cin.ignore(); 
        for (int i = 0; i < numStudents; ++i) {
            cout << "Enter name for student " << i + 1 << ": ";
            getline(cin, studentNames[i]); 
            int individualCost = entryFee + snackCost;
            totalCost += individualCost;
            cout << "Student " << i + 1 << ": " << studentNames[i]
                 << ", Total Cost: " << individualCost << " PKR" << endl;
        }
        cout << "\nStudent names for the event:" << endl;
        for (int i = 0; i < numStudents; ++i) {
            cout << "Student " << i + 1 << ": " << studentNames[i] << endl;
        }
        cout << "\nTotal cost for all students: " << totalCost << " PKR" << endl;
    }
    cout << "Program End." << endl;
    return 0;
}

