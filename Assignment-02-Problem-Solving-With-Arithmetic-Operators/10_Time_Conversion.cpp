#include <iostream>
using namespace std;
int main()
{
    int seconds, hours, rem_seconds_1, minutes, last_seconds;
    cout << "Enter Total Seconds" << endl;
    cin >> seconds;
    //For hours
    hours = seconds/3600;
    //For minutes
    rem_seconds_1=seconds%3600;
    minutes=rem_seconds_1/60;
    last_seconds=rem_seconds_1%60;
    cout << hours << "hour, " << minutes << "minute, " << last_seconds << "sec" << endl;
    return 0;
}