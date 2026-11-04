#include<iostream>
using namespace std;
int main()
{
    int over_due_days;
    cout << "Enter Your Book Over-due Days: ";
    cin >> over_due_days;
    if (over_due_days>0)
        cout << "Late Return: Fine Applicable" << endl;
    return 0;
}    