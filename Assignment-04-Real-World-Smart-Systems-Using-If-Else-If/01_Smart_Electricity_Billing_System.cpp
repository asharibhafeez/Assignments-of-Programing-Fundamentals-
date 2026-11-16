#include<iostream>
using namespace std;
int main()
{
    float unit, due_date, bill, total_bill;
    cout << "Enter Consume Units: " ;
    cin >> unit;
    cout << "Enter Due Date (1 for exceed & 0 for not)" << endl;
    cin >> due_date;
    if(unit<=100)
        bill=unit*10;
    else if(unit<=200)
        bill=100*10+(unit-100)*15;
    else if(unit<=500)
        bill=100*10+100*15+(unit-200)*20;
    else
        bill=100*10+100*15+300*20+(unit-500)*25;
    if(bill>10000)
        bill=bill+(bill*5/100);
    if(due_date==1)
        bill=bill+(bill*10/100);
    total_bill=bill;
    cout << "Total Bill = " << total_bill << endl;
    return 0;
}
