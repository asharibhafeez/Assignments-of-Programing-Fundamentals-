#include<iostream>
using namespace std;
int main()
{
    int room_temp;
    cout << "Enter Room Temperature in Celsius: ";
    cin >> room_temp;
    if (room_temp>30)
        cout << "Turn On the Cooling System" << endl;
    return 0;
}