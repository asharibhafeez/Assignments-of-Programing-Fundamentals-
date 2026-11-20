#include<iostream>
using namespace std;
int main()
{
	int i,N,sum;
	sum=0;
	cout << "Enter Number:";
	cin >> N;
	//for loop statements
	for(i=1;i<=N;i++)
	   {
		   sum=sum+(i*i);
		}
    //final output
	cout << "Sum = " << sum << endl;
	 return 0;
}
