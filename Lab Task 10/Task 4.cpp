#include <iostream>
using namespace std;
int printTempOpinion(int temperature) 
{
    if (temperature < 10)
        cout << "Cold" << endl;
    else if (temperature >= 20 && temperature <= 30)
        cout << "OK" << endl;
    else if (temperature > 30)
        cout << "Hot" << endl;
    else
        cout << "Temperature is undefined for this range." << endl;
}
int main() 
{
    int temp;
    cout << "Enter the temperature: ";
    cin >> temp;
    printTempOpinion(temp);
    return 0;
}

