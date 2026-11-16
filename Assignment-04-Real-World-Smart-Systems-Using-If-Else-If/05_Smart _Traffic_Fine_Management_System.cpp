#include<iostream>
using namespace std;
int main()
{
	// Title of my program
	cout << "-----Traffic Fine Managment System-----" << endl;
	float current_speed, prev_violation, driv_license, REG_vehicle;
	float fine_1, fine_2, total_fine;
	fine_1=0;
	fine_2=0;
	// input statements
	cout << "Enter Your Current Vehicle Speed:";
	cin >> current_speed;
	cout << "Pevious Violation ('1' for yes, '0' for no):";
	cin >> prev_violation;
	cout << "Driving License('1' for yes, '0' for no):";
	cin >> driv_license;
	cout << "Vehicle Registration('1' for yes, '0' for no):";
	cin >> REG_vehicle;
	// conditional statements part 1
	if (current_speed>=61 && current_speed<=80)
		  fine_1=fine_1+2000;
	else if (current_speed>=81 && current_speed<=100)
		  fine_1=fine_1+5000;
	else if (current_speed>100)
		  fine_1=fine_1+10000;
    else
	      fine_1=0;
	// conditional statements part 2
	if (prev_violation==1)
	   fine_2=fine_2+fine_1*25/100;
	if (driv_license==0)
	   fine_2=fine_2+5000; 
	if (REG_vehicle==0)
	   fine_2=fine_2+10000; 
	// total fine
	total_fine=fine_1+fine_2;
	cout << "Total Fine Calculation = " << total_fine;
	return 0;
}
