#include <iostream>
#include <string>
using namespace std;
int main() 
{
    const int ticketPrice = 500; 
    const int popcornPrice = 200; 
    const int maxUsers = 10; 
    int numUsers;
    int totalCost = 0;
    string userNames[maxUsers];
    cout << "Welcome to the Qawali Night Event!" << endl;
    cout << "How many users will attend the event? (Maximum 10): ";
    cin >> numUsers;
    if (numUsers > maxUsers) {
        cout << "Error: Not more than " << maxUsers << " users allowed." << endl;
    } else {
        cin.ignore(); 
        for (int i = 0; i < numUsers; ++i) {
            cout << "Enter name for user " << i + 1 << ": ";
            getline(cin, userNames[i]); 
            int individualCost = ticketPrice + popcornPrice;
            totalCost += individualCost;
            cout << "User " << i + 1 << ": " << userNames[i] 
                 << ", Total Cost: " << individualCost << " PKR" << endl;
        }
        cout << "\nUser names for the event:" << endl;
        for (int i = 0; i < numUsers; ++i) {
            cout << "User " << i + 1 << ": " << userNames[i] << endl;
        }
        cout << "\nTotal cost for all users: " << totalCost << " PKR" << endl;
    }
    cout << "Program End." << endl;
    return 0;
}

