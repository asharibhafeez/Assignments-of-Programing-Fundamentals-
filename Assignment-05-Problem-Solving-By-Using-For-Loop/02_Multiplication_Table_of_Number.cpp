#include<iostream>
using namespace std;
int main()
{
	int n,c;
	cout << "Enter Any Number:";
	cin >> n;
	//for loop statements starting point
	for(c=1;c<=10;c++)
		cout << n << "*" << c << " = " << n*c << endl; // Imp part of logic!
	return 0;
}
