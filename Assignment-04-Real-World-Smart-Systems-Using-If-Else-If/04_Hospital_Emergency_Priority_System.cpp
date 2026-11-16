#include<iostream>
using namespace std;
int  main()
{
	//variable declaration & inputs statements
	int age, temperature, oxygen_level, heart_rate;
	cout << "Enter Patient Age:";
	cin >> age;
	cout << "Enter Temperature in Fahrenheit Scale:";
	cin >> temperature;
	cout << "Enter Oxygen Level  Out of 100:";
	cin >> oxygen_level;
	cout << "Enter Patient Heart Rate:";
	cin >> heart_rate;
	//
	if (oxygen_level<90 && (heart_rate>130 || heart_rate<45) && age>65 && temperature>102)
	  {
		  cout << "Emergency Category : Critical" << endl;
		  cout << "Recomended Priority : High Piority" << endl;
	  }
	else if ((heart_rate>130 || heart_rate<45) && oxygen_level>=90 && oxygen_level<=94)
	  {
		  cout << "Emergency Category : Critical" << endl;
		  cout << "Recomended Priority : Moderate Priority" << endl;
      }
	else
	  cout << "Emergency Category : Normal " << endl;
	return 0;
}

