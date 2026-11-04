#include<iostream>
using namespace std;
int main()
{
    int employ_attend_percent;
    cout << "Enter Attendance Percentage: ";
    cin >> employ_attend_percent;
    if (employ_attend_percent<75)
        cout << "Attendance Warning!" << endl;
    return 0;
}    