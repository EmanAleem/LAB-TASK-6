#include <iostream>
using namespace std;
int cube(int n) 
{
    return n * n * n;
}
int main() 
{
    int number;
    cout << "Enter integers to find their cubes (enter 0 to stop):" << endl;
    while (true) {
        cin >> number;
        if (number == 0)
            break;
        cout << "Cube of " << number << " is " << cube(number) << endl;
    }
    return 0;
}

