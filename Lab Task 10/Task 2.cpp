#include <iostream>
using namespace std;
int findLargest(int a, int b, int c) 
{
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}
int main() {
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    int largest = findLargest(num1, num2, num3);
    cout << "The largest number is: " << largest << endl;
    return 0;
}

