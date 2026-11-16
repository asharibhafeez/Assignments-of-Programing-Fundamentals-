#include<iostream>
using namespace std;
int main()
{
	  int matric, intermediate, entry_test;
	  cout << "Enter Your Matric Marks Percentage:";
	  cin >>matric;
	  cout << "Enter Your Intermediate Marks Percentage:";
	  cin >>intermediate;
	  cout << "Enter Your Entry Test Marks Percentage:";
	  cin >>entry_test;
	  cout << "-----Scholarship Egligibilty-----" << endl;
	  if(intermediate>=85 && entry_test>=80)
	     cout << "Your are egligible for scholarship." << endl;
	  else 
	     cout << "You are not eglible for scholarship." << endl;
	  cout << "-----Admission Status-----" << endl;
	  if(matric>=60 && intermediate>=65 && entry_test>=50)
	     cout << "Your admission is accepted!" << endl;
	  else
	     cout << "Your admission is rejected!" << endl;
	  return 0;
}
