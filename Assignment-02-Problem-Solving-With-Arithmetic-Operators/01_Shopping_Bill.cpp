#include<iostream>
using namespace std;

int main()
{
    int notebook_item, pen_item;
    int notebook_price, pen_price;
    int notebook_bill, pen_bill, total_bill;
    cout << "Enter Quantity of Pens" << endl;
    cin >> pen_item;
    cout << "Enter Price of each pen" << endl;
    cin >> pen_price;
    cout << "Enter Quantity of Notebooks" << endl;
    cin >> notebook_item;
    cout << "Enter Price of each Notebook" << endl;
    cin >> notebook_price;
    notebook_bill=notebook_item*notebook_price;
    pen_bill=pen_item*pen_price;
    total_bill=notebook_bill+pen_bill;
    cout << "Total Bill = " << total_bill;
    return 0;
}