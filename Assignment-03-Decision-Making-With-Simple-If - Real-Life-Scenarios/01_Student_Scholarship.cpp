#include<iostream>
using namespace std;
int main()
{
    int stu_marks, stu_attend_percentage;
    cout << "Enter Your Marks: " ;
    cin >> stu_marks;
    cout << "Enter Your Attendance Percentage: " ;
    cin >> stu_attend_percentage;
    if (stu_marks>=85 && stu_attend_percentage>=90)
        cout << "Eglible For Scholarship!" << endl;
    return 0 ;
}