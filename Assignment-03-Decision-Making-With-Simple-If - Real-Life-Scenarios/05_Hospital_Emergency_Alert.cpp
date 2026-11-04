#include<iostream>
using namespace std;
int main()
{
    int patient_temp;
    cout << "Enter Patient Temperature: ";
    cin >> patient_temp;
    if (patient_temp>=39)
        cout << "High Fever Alert: Seek Medical Assessment" << endl;
    return 0;
}    