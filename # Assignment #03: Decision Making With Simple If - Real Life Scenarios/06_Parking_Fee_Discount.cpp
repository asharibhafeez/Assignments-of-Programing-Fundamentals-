#include<iostream>
using namespace std;
int main()
{
    int parked_hours, stu_id;
    cout << "Enter Student ID (1 for yes or 0 for no): ";
    cin >> stu_id;
    cout << "Enter Parked Hours: ";
    cin >> parked_hours;
    if (stu_id=1 && parked_hours>=2)
        cout << "Student Parking Discount Applicable" << endl;
    return 0;
}    