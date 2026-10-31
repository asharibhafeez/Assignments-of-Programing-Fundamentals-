#include<iostream>
using namespace std;

int main()
{
    float basic_salary, house_rent_allowance, medical_allowance, gross_salary;
    cout << "Enter Basic Salary" << endl;
    cin >> basic_salary;
    cout << "Enter House Allowance" << endl;
    cin >> house_rent_allowance;
    cout << "Enter Medical Allowance" << endl;
    cin >> medical_allowance;
    gross_salary=basic_salary+house_rent_allowance+medical_allowance;
    cout << "Gross Salary = " << gross_salary;
    return 0;
}