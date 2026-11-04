#include<iostream>
using namespace std;
int main()
{
    int battery_percentage;
    cout << "Enter Your Mobile Battery Percentage: ";
    cin >> battery_percentage;
    if (battery_percentage<=15)
        cout << "Low Battery! Plz Charge Your Phone." << endl;
    return 0;
}    