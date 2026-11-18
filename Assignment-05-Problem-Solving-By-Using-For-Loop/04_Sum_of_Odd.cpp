
#include<iostream>
using namespace std;
int main()
{
	int n, sum=0;
	//for loop statements 
	for(n=1;n<=50;n++)
	   {
		   if(n%2!=0)
		      sum=sum+n;
		}
	//final result
	cout << "SUM = " << sum;
	return 0;
}
