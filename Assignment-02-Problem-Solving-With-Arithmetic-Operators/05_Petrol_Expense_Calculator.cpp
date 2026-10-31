#include<iostream>
using namespace std;

int main()
{
    float total_distance, ave_fuel_consumption, fuel_price;
    float total_fuel_consume, total_fuel_cost;
    cout << "Enter Total Distance in Kilometers" << endl;
    cin >> total_distance;
    cout << "Average One Litre Fuel Consumption" << endl;
    cin >> ave_fuel_consumption;
    cout << "Enter Fuel Price" << endl;
    cin >> fuel_price;
    total_fuel_consume=total_distance/ave_fuel_consumption;
    total_fuel_cost=total_fuel_consume*fuel_price;
    cout << "Total Fuel Consume = " << total_fuel_consume << " Liter" << endl;
    cout << "Total Fuel Cost = " << total_fuel_cost;
    return 0;
}