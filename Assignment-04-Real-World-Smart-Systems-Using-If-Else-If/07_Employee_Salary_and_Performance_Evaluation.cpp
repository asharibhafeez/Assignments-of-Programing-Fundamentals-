#include<iostream>
using namespace std;
int main()
{
        int current_salary, bonus_salary=0, attendance, perform_rating, work_experience, final_salary;
        // input statements
        cout << "Enter your current salary:";
        cin >> current_salary;
        cout << "Enter attendance percentage:";
        cin >> attendance;
        cout << "Performance rating (out of 5) :";
        cin >> perform_rating;
        cout << "Enter your working experience in years:";
        cin >> work_experience;
        // logic starting from here
        // part 1
        if (attendance<75) // No bonus.
           bonus_salary=current_salary+0;
        else if (attendance>=75 && attendance<=89) // 5% bonus
           bonus_salary=current_salary+(current_salary*5/100);
        else if (attendance>=90 && attendance<=95) // 10% bonus
           bonus_salary=current_salary+(current_salary*10/100);
        else // 15% bonus because input must be greater than 95.
           bonus_salary=current_salary+(current_salary*15/100);
        //part 2
        if (perform_rating<3)
           {
			   final_salary=current_salary;
               cout << "Your are not not eglible for bonus" << endl;
		   }
		else
		    {
				final_salary=bonus_salary;
				cout << "Congratulations! Your egligible for bonus." << endl;
			}
		if (work_experience>5)
		   final_salary=final_salary+5000;
		else 
		   final_salary=final_salary+0;
		// Final output
		cout << "Final Salary = " << final_salary;
		return 0;
}
