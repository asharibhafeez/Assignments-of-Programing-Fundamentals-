#include<iostream>
using namespace std;
int main()
{
	int i,N;
	cout << "Enter A Number:";
	cin >> N;
	//for loop statements
	for(i=1;i<=N;i++)
	   {
		   if(i%3==0 || i%5==0)
	          cout << i << "---Divisible by 3 or 5" << endl;
       }
	return 0;
}

