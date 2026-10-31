#include<iostream>
using namespace std;

int main()
{
    float consume_units, unit_price, total_bill;
    cout << "Enter Consume Units" << endl;
    cin >> consume_units;
    cout << "Enter Price of one unit" << endl;
    cin >> unit_price;
    total_bill=consume_units*unit_price;
    cout << "Total Bill = " << total_bill;
    return 0;
}