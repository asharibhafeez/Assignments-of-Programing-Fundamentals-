#include<iostream>
using namespace std;
int main()
{
      int buy_amount, prem_mem, total_amount, final_amount,  prev_order_conf;
      int delivery_fee;
      delivery_fee=500;
      // input statements
      cout << "Enter Purchase Amout:";
      cin >> buy_amount;
      cout << "Premium Member (1 for yes, 0 for no):";
      cin >> prem_mem;
      cout << "Previous Order Status(1 for unpaid, 0 for paid):";
      cin >> prev_order_conf;
      // discount calculation part
      if (buy_amount>50000)
         buy_amount=buy_amount-(buy_amount*20/100);
      else if (buy_amount>25000)
         buy_amount=buy_amount-(buy_amount*15/100);
      else if (buy_amount>10000)
         buy_amount=buy_amount-(buy_amount*10/100);
      else
         buy_amount=buy_amount-0;
      // premium members discount
      if (prem_mem==1)
         buy_amount=buy_amount-(buy_amount*5/100);
      // final amount
      total_amount=buy_amount;
      // delivery fee
	  if (total_amount>20000)
	     total_amount=total_amount-delivery_fee;
	  else
	     total_amount=total_amount+delivery_fee;
	  // previous order confirmation
	  if (prev_order_conf==1)
	     cout << "Order Cannot be confirmed" << endl;
	  else 
	   {
		   final_amount=total_amount;
	       cout << "Order Status:- Your Order is Confirmed." << endl;
	       cout << "Final Payable Amount = " << final_amount;
	    }
	  return 0;
}
