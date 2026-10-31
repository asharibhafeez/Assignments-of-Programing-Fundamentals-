#include <iostream>
using namespace std;
int main()
{
    int purchase_price, sell_price, quantity;
    int total_purchase_cost, sales_revenue, profit_loss;
    cout << "Enter Purchase Price" << endl;
    cin >> purchase_price;
    cout << "Enter Selling Price" << endl;
    cin >> sell_price;
    cout << "Enter Products Quantity" << endl;
    cin >> quantity;
    // Total Purchase Price
    total_purchase_cost=purchase_price*quantity;
    // Total Sales Revenue
    sales_revenue=sell_price*quantity;
    // Profit and Loss
    profit_loss=sales_revenue-total_purchase_cost;
    cout << "Total Purchase Cost = " << total_purchase_cost << endl;
    cout << "Total Sales Revenue = " << sales_revenue << endl;
    cout << "Profit / Loss = " << profit_loss << endl;
    return 0;
}