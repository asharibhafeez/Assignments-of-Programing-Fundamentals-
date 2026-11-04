#include<iostream>
using namespace std;
int main()
{
    int rem_exam_time;
    cout << "Enter Remaining Time of Exam: ";
    cin >> rem_exam_time;
    if (rem_exam_time<=5)
        cout << "Warning! Exam is About to End." << endl;
    return 0;
}