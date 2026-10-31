#include<iostream>
using namespace std;

int main()
{
    int ENG, PHY, MATH, URDU, CHEM;
    float sum,average, percentage;
    cout << "Enter Marks upto 100 For each subject" << endl;
    cout << "Enter Your English Marks" << endl;
    cin >> ENG;
    cout << "Enter Your Physics Marks" << endl;
    cin >> PHY;
    cout << "Enter Your Mathematics Marks" << endl;
    cin >> MATH;
    cout << "Enter Your Urdu Marks" << endl;
    cin >> URDU;
    cout << "Enter Your Chemistry Marks" << endl;
    cin >> CHEM;
    sum=ENG+PHY+MATH+URDU+CHEM;
    average=sum/5;
    percentage=(sum/500)*100;
    cout << "Sum = " << sum <<endl;
    cout << "Average = " << average << endl;
    cout << "Percentage = " << percentage << endl;
    return 0;

}