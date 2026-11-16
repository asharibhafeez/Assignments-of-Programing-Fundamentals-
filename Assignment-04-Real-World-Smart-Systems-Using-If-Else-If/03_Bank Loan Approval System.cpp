#include<iostream>
using namespace std;
int main()
{
	int age, monthly_salary, employ_duration, credit_score, exis_installment;
	cout << "Enter Your Age:";
	cin >> age;
	cout << "Enter Your Monthly Salary:";
	cin >> monthly_salary;
	cout << "Enter Your Employment Duration in Years:";
	cin >> employ_duration;
	cout <<  "Existing Loan Installment:";
	cin >> exis_installment;
	cout << "Enter Your Credit Score:";
	cin >> credit_score;
	float forty_percent_salary=monthly_salary*0.40;
	cout << "-----Loan Approval Status-----" << endl;
	if (age>=21 && monthly_salary>=50000 && employ_duration>=2 && exis_installment<=forty_percent_salary && credit_score>=600)
	  cout << "Your Loan Application is Approved" << endl;
	else
	  cout << "Your Loan Application is Rejected" << endl;
	cout << "-----Premium Loan Approval Status-----" << endl;
	if (monthly_salary>150000 && employ_duration>5)
	  cout << "You're Qualify for Premium Loan." << endl;
	else
	  cout << "You're not Qualified for Premium Loan." << endl;
	return 0;	
	}
