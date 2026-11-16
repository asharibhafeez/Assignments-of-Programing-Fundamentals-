#include<iostream>
using namespace std;
int main()
{
	  int current_acc_balance, wid_amount, daily_wid_amount, block;
	  int remaining_balance;
	  // input part
	  cout << "Enter current account balance:";
	  cin >> current_acc_balance;
	  cout << "Enter withdrawal amount:";
	  cin >> wid_amount;
	  cout << "Already Daily withdrawal amount:";
	  cin >> daily_wid_amount;
	  cout << "Account status (1 for blocked, 0 for usable) :";
	  cin >> block;
	  //logic start from here
	  if(block==1)
	    cout << "Account is Blocked!" << endl;
	  else if(wid_amount<500)
	    cout << "Minimum withdrawal is 500." << endl;
	  else if(wid_amount%500!=0)
	    cout << "Withdrawal amount should be multiple of 500." << endl;
	  else if(wid_amount>current_acc_balance)
	    cout << "Insufficient Balance!" << endl;
	  else if(wid_amount+daily_wid_amount>100000)
	    cout << "Daily limit exceed!" << endl;
	  else if(wid_amount>50000)
	    cout << "Additional Verfication is Required." << endl;
	  else
	  {
		  remaining_balance=current_acc_balance-wid_amount;
		  cout << "Transaction is allowed." << endl;
		  cout << "Remaining Balance = " << remaining_balance << endl;
	  }
	  return 0; 
}
